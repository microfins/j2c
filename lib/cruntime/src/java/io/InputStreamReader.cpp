// Generated from /runtime/java/io/InputStreamReader.java
#include <java/io/InputStreamReader.hpp>

#include <avian/Utf8.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::InputStreamReader::InputStreamReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::InputStreamReader::InputStreamReader(InputStream* in) 
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::InputStreamReader::InputStreamReader(InputStream* in, ::java::lang::String* encoding)  /* throws(UnsupportedEncodingException) */
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,encoding);
}

constexpr int32_t java::io::InputStreamReader::MultibytePadding;

void java::io::InputStreamReader::ctor(InputStream* in)
{
    super::ctor();
    this->in = in;
}

void java::io::InputStreamReader::ctor(InputStream* in, ::java::lang::String* encoding) /* throws(UnsupportedEncodingException) */
{
    ctor(in);
    if(!npc(encoding)->equals(static_cast< ::java::lang::Object* >(u"UTF-8"_j))) {
        throw new UnsupportedEncodingException(encoding);
    }
}

int32_t java::io::InputStreamReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(length == 0) {
        return 0;
    }
    auto buffer = new ::int8_tArray(length + MultibytePadding);
    auto bufferLength = length;
    auto bufferOffset = int32_t(0);
    while (true) {
        auto c = npc(in)->read(buffer, bufferOffset, bufferLength);
        if(c <= 0) {
            if(bufferOffset > 0) {
                c = 1;
                while (bufferOffset > 0) {
                    auto buffer16 = ::avian::Utf8::decode16(buffer, 0, bufferOffset);
                    if(buffer16 != nullptr) {
                        ::java::lang::System::arraycopy(buffer16, 0, b, offset, npc(buffer16)->length);
                        c = npc(buffer16)->length + int32_t(1);
                        break;
                    } else {
                        --bufferOffset;
                    }
                }
                (*b)[offset + c - int32_t(1)] = u'\ufffd';
            }
            return c;
        }
        bufferOffset += c;
        auto buffer16 = ::avian::Utf8::decode16(buffer, 0, bufferOffset);
        if(buffer16 != nullptr) {
            bufferOffset = 0;
            ::java::lang::System::arraycopy(buffer16, 0, b, offset, npc(buffer16)->length);
            return npc(buffer16)->length;
        } else {
            bufferLength = 1;
        }
    }
}

void java::io::InputStreamReader::close() /* throws(IOException) */
{
    npc(in)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::InputStreamReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.InputStreamReader", 25);
    return c;
}

int32_t java::io::InputStreamReader::read()
{
    return super::read();
}

int32_t java::io::InputStreamReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::InputStreamReader::getClass0()
{
    return class_();
}

