// Native methods required by the java.lang package.

#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <sys/time.h>

#include <java/lang/System.hpp>
#include <java/lang/String.hpp>

#include <Array.hpp>
#include <SubArray.hpp>

#include "j2c.hpp"

using namespace java::lang;

String* String::intern() {
	// This obviously isn't right.
	return this;
}

int64_t System::currentTimeMillis() {
#ifdef PLATFORM_WINDOWS
  // We used to use _ftime here, but that only gives us 1-second
  // resolution on Windows 7.  _ftime_s might work better, but MinGW
  // doesn't have it as of this writing.  So we use this mess instead:
  FILETIME time;
  GetSystemTimeAsFileTime(&time);
  return (((static_cast<int64_t>(time.dwHighDateTime) << 32) | time.dwLowDateTime) / 10000) - 11644473600000LL;
#else
  timeval tv = { 0, 0 };
  gettimeofday(&tv, 0);
  return (static_cast<int64_t>(tv.tv_sec) * 1000) + (static_cast<int64_t>(tv.tv_usec) / 1000);
#endif
}

void java::lang::System::arraycopy(Object* src, int32_t srcOffset, Object* dst, int32_t dstOffset, int32_t length) {
	// TODO!!
	//  - Bounds checks
	//  - Type checks
	//  - Handle ObjectArray
	if (length == 0) return;

	InternalArrayAccess *arr_src = dynamic_cast<InternalArrayAccess*>(src);
	InternalArrayAccess *arr_dst = dynamic_cast<InternalArrayAccess*>(dst);
	if (!arr_src || !arr_dst) {
		unimplemented_(u"arraycopy with object arrays is not supported yet");
		return;
	}

	assert(dstOffset < arr_dst->num_elements());
	assert(srcOffset < arr_src->num_elements());
	assert(arr_src->element_size_bytes() == arr_dst->element_size_bytes());
	int elsize = arr_src->element_size_bytes();
	int8_t *write_cursor = arr_dst->raw_ptr() + (dstOffset * elsize);
	int8_t *read_cursor = arr_src->raw_ptr() + (srcOffset * elsize);
	memcpy(write_cursor, read_cursor, length * elsize);
}

String* System::getProperty(String *name, ::boolArray *found) {
	// found is an array of one element to work around the lack of a pair type in Java.
	if (name->equals(u"line.separator"_j)) {
		found->set(0, true);
		return u"\n"_j;
	};

	found->set(0, false);
	return nullptr;
}