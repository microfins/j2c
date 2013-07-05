// Generated from /runtime/java/io/BufferedReader.java
#include <java/io/BufferedReader.hpp>

#include <java/io/Reader.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::BufferedReader::BufferedReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::BufferedReader::BufferedReader(Reader* in, int32_t bufferSize) 
    : BufferedReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,bufferSize);
}

java::io::BufferedReader::BufferedReader(Reader* in) 
    : BufferedReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::io::BufferedReader::ctor(Reader* in, int32_t bufferSize)
{
    super::ctor();
    this->in = in;
    this->buffer = new ::char16_tArray(bufferSize);
}

void java::io::BufferedReader::ctor(Reader* in)
{
    ctor(in, int32_t(32));
}

void java::io::BufferedReader::fill() /* throws(IOException) */
{
    position = 0;
    limit = npc(in)->read(buffer);
}

java::lang::String* java::io::BufferedReader::readLine() /* throws(IOException) */
{
    auto sb = new ::java::lang::StringBuilder();
    while (true) {
        if(position >= limit) {
            fill();
        }
        if(position >= limit) {
            return npc(sb)->length() == 0 ? static_cast< ::java::lang::String* >(nullptr) : npc(sb)->toString();
        }
        for (auto i = position; i < limit; ++i) {
            if((*buffer)[i] == u'\u000d') {
                npc(sb)->append(buffer, position, i - position);
                position = i + int32_t(1);
                if(i + int32_t(1) < limit && (*buffer)[i + int32_t(1)] == u'\u000a') {
                    position = i + int32_t(2);
                }
                return npc(sb)->toString();
            } else if((*buffer)[i] == u'\u000a') {
                npc(sb)->append(buffer, position, i - position);
                position = i + int32_t(1);
                return npc(sb)->toString();
            }
        }
        npc(sb)->append(buffer, position, limit - position);
        position = limit;
    }
}

int32_t java::io::BufferedReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto count = int32_t(0);
    if(position >= limit && length < npc(buffer)->length) {
        fill();
    }
    if(position < limit) {
        auto remaining = limit - position;
        if(remaining > length) {
            remaining = length;
        }
        ::java::lang::System::arraycopy(buffer, position, b, offset, remaining);
        count += remaining;
        position += remaining;
        offset += remaining;
        length -= remaining;
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

void java::io::BufferedReader::close() /* throws(IOException) */
{
    npc(in)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::BufferedReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.BufferedReader", 22);
    return c;
}

int32_t java::io::BufferedReader::read()
{
    return super::read();
}

int32_t java::io::BufferedReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::BufferedReader::getClass0()
{
    return class_();
}

