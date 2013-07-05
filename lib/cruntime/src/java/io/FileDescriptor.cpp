// Generated from /runtime/java/io/FileDescriptor.java
#include <java/io/FileDescriptor.hpp>

java::io::FileDescriptor::FileDescriptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileDescriptor::FileDescriptor(int32_t value) 
    : FileDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::io::FileDescriptor::FileDescriptor() 
    : FileDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::FileDescriptor*& java::io::FileDescriptor::in()
{
    clinit();
    return in_;
}
java::io::FileDescriptor* java::io::FileDescriptor::in_;

java::io::FileDescriptor*& java::io::FileDescriptor::out()
{
    clinit();
    return out_;
}
java::io::FileDescriptor* java::io::FileDescriptor::out_;

java::io::FileDescriptor*& java::io::FileDescriptor::err()
{
    clinit();
    return err_;
}
java::io::FileDescriptor* java::io::FileDescriptor::err_;

void java::io::FileDescriptor::ctor(int32_t value)
{
    super::ctor();
    this->value = value;
}

void java::io::FileDescriptor::ctor()
{
    ctor(-int32_t(1));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileDescriptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileDescriptor", 22);
    return c;
}

void java::io::FileDescriptor::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        in_ = new FileDescriptor(int32_t(0));
        out_ = new FileDescriptor(int32_t(1));
        err_ = new FileDescriptor(int32_t(2));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::io::FileDescriptor::getClass0()
{
    return class_();
}

