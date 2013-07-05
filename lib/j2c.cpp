/**
 * Core implementation of the "virtual machine" - really of course there is no VM,
 * these methods are called by the generated C++ code to help support Java features
 * like locking. Also contains support for app startup.
 */

#include "j2c.hpp"

#include <stdint.h>

#include <string.h>

#include <string>
#include <iostream>
#include <vector>

#include <java/lang/Class.hpp>

using namespace java::lang;

namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
}
}

String *c2jstr(char *cstr) {
	// Convert first to an array of characters, then to a string from that.
	// Assume platform default encoding for now.
	int len = strlen(cstr);
	::int8_tArray *chars = new ::int8_tArray((int8_t*)cstr, len);
	return new String(chars, 0, len);
}

StringArray* make_args(int args, char** argv) {
	String** jargs = new String*[args];
	for (int i = 0; i < args; i++) {
		jargs[i] = c2jstr(argv[i]);
	}
	auto result = new StringArray(&jargs[0], args);
	return result;
}

void init_jvm() {
	// We have to set up these here because we'd die with a circular initialization error
	// if these were global constants (String containing more Strings ...)
	String::UTF_8_ENCODING() = u"UTF-8"_j;
    String::ISO_8859_1_ENCODING() = u"ISO-8859-1"_j;
    String::LATIN_1_ENCODING() = u"LATIN-1"_j;
    String::DEFAULT_ENCODING() = String::UTF_8_ENCODING();
}

void lock(Object *) { }

void unlock(Object *) { }

String *java::lang::operator "" _j(const char16_t * p, size_t n)
{
    char16_tArray *x = new char16_tArray(p, n);
	return new String(x);
}

Class *class_(const char16_t *s, int n)
{
	// This is obviously bogus. The Character class reflects itself in a static global though.
	return new Class(nullptr);
    //return Class::forName(operator "" _j(s, n), false, ClassLoader::getCallerClassLoader());
}

void unimplemented_(const char16_t *name) {
	// Not quite right but good enough ;)
	printf("unimplemented: ");
	while (*name) printf("%c", (char)(*(name++)));
	printf("\n");
	abort();
}
