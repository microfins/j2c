// Native methods required by the java.io package.

#include <unistd.h>

#include <Array.hpp>
#include <SubArray.hpp>

#include <java/io/FileOutputStream.hpp>

void java::io::FileOutputStream::write(int32_t fd, ::int8_tArray* b, int32_t offset, int32_t length)
{
    clinit();
    ::write(fd, b->p + offset, length);
}

void java::io::FileOutputStream::write(int32_t fd, int32_t c) {
	clinit();
	::write(fd, &c, 1);
}