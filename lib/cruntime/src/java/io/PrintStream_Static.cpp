// Generated from /runtime/java/io/PrintStream.java
#include <java/io/PrintStream_Static.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::PrintStream_Static::PrintStream_Static(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::PrintStream_Static::PrintStream_Static()
    : PrintStream_Static(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray*& java::io::PrintStream_Static::newline()
{
    clinit();
    return newline_;
}
int8_tArray* java::io::PrintStream_Static::newline_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::PrintStream_Static::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.PrintStream.Static", 26);
    return c;
}

void java::io::PrintStream_Static::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        newline_ = npc(::java::lang::System::getProperty(u"line.separator"_j))->getBytes();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::io::PrintStream_Static::getClass0()
{
    return class_();
}

