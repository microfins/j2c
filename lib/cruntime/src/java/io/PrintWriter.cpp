// Generated from /runtime/java/io/PrintWriter.java
#include <java/io/PrintWriter.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::PrintWriter::PrintWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::PrintWriter::PrintWriter(Writer* out, bool autoFlush) 
    : PrintWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,autoFlush);
}

java::io::PrintWriter::PrintWriter(Writer* out) 
    : PrintWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

java::io::PrintWriter::PrintWriter(OutputStream* out, bool autoFlush) 
    : PrintWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,autoFlush);
}

java::io::PrintWriter::PrintWriter(OutputStream* out) 
    : PrintWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

char16_tArray*& java::io::PrintWriter::newline()
{
    clinit();
    return newline_;
}
char16_tArray* java::io::PrintWriter::newline_;

void java::io::PrintWriter::ctor(Writer* out, bool autoFlush)
{
    super::ctor();
    this->out = out;
    this->autoFlush = autoFlush;
}

void java::io::PrintWriter::ctor(Writer* out)
{
    ctor(out, false);
}

void java::io::PrintWriter::ctor(OutputStream* out, bool autoFlush)
{
    ctor(static_cast< Writer* >(new OutputStreamWriter(out)), autoFlush);
}

void java::io::PrintWriter::ctor(OutputStream* out)
{
    ctor(out, false);
}

void java::io::PrintWriter::print(::java::lang::String* s)
{
    try {
        npc(out)->write(npc(s)->toCharArray_());
    } catch (IOException* e) {
    }
}

void java::io::PrintWriter::print(::java::lang::Object* o)
{
    print(npc(o)->toString());
}

void java::io::PrintWriter::print(char16_t c)
{
    print(::java::lang::String::valueOf(c));
}

void java::io::PrintWriter::println(::java::lang::String* s)
{
    try {
        npc(out)->write(npc(s)->toCharArray_());
        npc(out)->write(newline_);
        if(autoFlush)
            flush();

    } catch (IOException* e) {
    }
}

void java::io::PrintWriter::println()
{
    try {
        npc(out)->write(newline_);
        if(autoFlush)
            flush();

    } catch (IOException* e) {
    }
}

void java::io::PrintWriter::println(::java::lang::Object* o)
{
    println(npc(o)->toString());
}

void java::io::PrintWriter::println(char16_t c)
{
    println(::java::lang::String::valueOf(c));
}

void java::io::PrintWriter::write(::char16_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(out)->write(buffer, offset, length);
    if(autoFlush)
        flush();

}

void java::io::PrintWriter::flush()
{
    try {
        npc(out)->flush();
    } catch (IOException* e) {
    }
}

void java::io::PrintWriter::close()
{
    try {
        npc(out)->close();
    } catch (IOException* e) {
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::PrintWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.PrintWriter", 19);
    return c;
}

void java::io::PrintWriter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        newline_ = npc(::java::lang::System::getProperty(u"line.separator"_j))->toCharArray_();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void java::io::PrintWriter::write(int32_t c)
{
    super::write(c);
}

void java::io::PrintWriter::write(::char16_tArray* buffer)
{
    super::write(buffer);
}

void java::io::PrintWriter::write(::java::lang::String* s)
{
    super::write(s);
}

void java::io::PrintWriter::write(::java::lang::String* s, int32_t offset, int32_t length)
{
    super::write(s, offset, length);
}

java::lang::Class* java::io::PrintWriter::getClass0()
{
    return class_();
}

