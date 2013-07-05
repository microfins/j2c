// Generated from /runtime/java/io/PrintStream.java
#include <java/io/PrintStream.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PrintStream_Static.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::PrintStream::PrintStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::PrintStream::PrintStream(OutputStream* out, bool autoFlush) 
    : PrintStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,autoFlush);
}

java::io::PrintStream::PrintStream(OutputStream* out) 
    : PrintStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::io::PrintStream::ctor(OutputStream* out, bool autoFlush)
{
    super::ctor();
    this->out = out;
    this->autoFlush = autoFlush;
}

void java::io::PrintStream::ctor(OutputStream* out)
{
    ctor(out, false);
}

void java::io::PrintStream::print(::java::lang::String* s)
{
    try {
        npc(out)->write(npc(s)->getBytes());
        if(autoFlush)
            flush();

    } catch (IOException* e) {
    }
}

void java::io::PrintStream::print(::java::lang::Object* o)
{
    print(::java::lang::String::valueOf(o));
}

void java::io::PrintStream::print(bool v)
{
    print(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::print(char16_t c)
{
    print(::java::lang::String::valueOf(c));
}

void java::io::PrintStream::print(int32_t v)
{
    print(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::print(int64_t v)
{
    print(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::print(float v)
{
    print(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::print(double v)
{
    print(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::print(::char16_tArray* s)
{
    print(::java::lang::String::valueOf(s));
}

void java::io::PrintStream::println(::java::lang::String* s)
{
    try {
        npc(out)->write(npc(s)->getBytes());
        npc(out)->write(PrintStream_Static::newline());
        if(autoFlush)
            flush();

    } catch (IOException* e) {
    }
}

void java::io::PrintStream::println()
{
    try {
        npc(out)->write(PrintStream_Static::newline());
        if(autoFlush)
            flush();

    } catch (IOException* e) {
    }
}

void java::io::PrintStream::println(::java::lang::Object* o)
{
    println(::java::lang::String::valueOf(o));
}

void java::io::PrintStream::println(bool v)
{
    println(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::println(char16_t c)
{
    println(::java::lang::String::valueOf(c));
}

void java::io::PrintStream::println(int32_t v)
{
    println(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::println(int64_t v)
{
    println(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::println(float v)
{
    println(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::println(double v)
{
    println(::java::lang::String::valueOf(v));
}

void java::io::PrintStream::println(::char16_tArray* s)
{
    println(::java::lang::String::valueOf(s));
}

void java::io::PrintStream::write(int32_t c) /* throws(IOException) */
{
    npc(out)->write(c);
    if(autoFlush && c == u'\u000a')
        flush();

}

void java::io::PrintStream::write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(out)->write(buffer, offset, length);
    if(autoFlush)
        flush();

}

void java::io::PrintStream::flush()
{
    try {
        npc(out)->flush();
    } catch (IOException* e) {
    }
}

void java::io::PrintStream::close()
{
    try {
        npc(out)->close();
    } catch (IOException* e) {
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::PrintStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.PrintStream", 19);
    return c;
}

void java::io::PrintStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::Class* java::io::PrintStream::getClass0()
{
    return class_();
}

