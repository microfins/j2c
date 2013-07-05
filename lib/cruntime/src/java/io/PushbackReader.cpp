// Generated from /runtime/java/io/PushbackReader.java
#include <java/io/PushbackReader.hpp>

#include <java/io/IOException.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::PushbackReader::PushbackReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::PushbackReader::PushbackReader(Reader* in, int32_t bufferSize) 
    : PushbackReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,bufferSize);
}

java::io::PushbackReader::PushbackReader(Reader* in) 
    : PushbackReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::io::PushbackReader::ctor(Reader* in, int32_t bufferSize)
{
    super::ctor();
    if(bufferSize > 1) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(bufferSize)->append(u" > 1"_j)->toString());
    }
    this->in = in;
    this->hasSavedChar = false;
}

void java::io::PushbackReader::ctor(Reader* in)
{
    ctor(in, int32_t(1));
}

int32_t java::io::PushbackReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto count = int32_t(0);
    if(hasSavedChar && length > 0) {
        length--;
        (*b)[offset++] = savedChar;
        hasSavedChar = false;
        count = 1;
    }
    if(length > 0) {
        auto c = npc(in)->read(b, offset, length);
        if(c == -int32_t(1)) {
            if(count == 0) {
                count = -int32_t(1);
            }
        } else {
            count += c;
        }
    }
    return count;
}

void java::io::PushbackReader::unread(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(length != 1) {
        throw new IOException(::java::lang::StringBuilder().append(u"Can only push back 1 char, not "_j)->append(length)->toString());
    } else if(hasSavedChar) {
        throw new IOException(u"Already have a saved char"_j);
    } else {
        hasSavedChar = true;
        savedChar = (*b)[offset];
    }
}

void java::io::PushbackReader::unread(::char16_tArray* b) /* throws(IOException) */
{
    unread(b, 0, npc(b)->length);
}

void java::io::PushbackReader::unread(int32_t c) /* throws(IOException) */
{
    unread(new ::char16_tArray({static_cast< char16_t >(c)}));
}

void java::io::PushbackReader::close() /* throws(IOException) */
{
    npc(in)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::PushbackReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.PushbackReader", 22);
    return c;
}

int32_t java::io::PushbackReader::read()
{
    return super::read();
}

int32_t java::io::PushbackReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::PushbackReader::getClass0()
{
    return class_();
}

