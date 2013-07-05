// Generated from /runtime/java/nio/ByteOrder.java
#include <java/nio/ByteOrder.hpp>

#include <java/lang/String.hpp>

java::nio::ByteOrder::ByteOrder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::ByteOrder::ByteOrder(::java::lang::String* name) 
    : ByteOrder(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::nio::ByteOrder*& java::nio::ByteOrder::BIG_ENDIAN()
{
    clinit();
    return BIG_ENDIAN_;
}
java::nio::ByteOrder* java::nio::ByteOrder::BIG_ENDIAN_;

java::nio::ByteOrder*& java::nio::ByteOrder::LITTLE_ENDIAN()
{
    clinit();
    return LITTLE_ENDIAN_;
}
java::nio::ByteOrder* java::nio::ByteOrder::LITTLE_ENDIAN_;

java::nio::ByteOrder*& java::nio::ByteOrder::NATIVE()
{
    clinit();
    return NATIVE_;
}
java::nio::ByteOrder* java::nio::ByteOrder::NATIVE_;

void java::nio::ByteOrder::ctor(::java::lang::String* name)
{
    super::ctor();
    this->name = name;
}

java::lang::String* java::nio::ByteOrder::toString()
{
    return name;
}

java::nio::ByteOrder* java::nio::ByteOrder::nativeOrder()
{
    clinit();
    return NATIVE_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::ByteOrder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.ByteOrder", 18);
    return c;
}

void java::nio::ByteOrder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        BIG_ENDIAN_ = new ByteOrder(u"BIG_ENDIAN"_j);
        LITTLE_ENDIAN_ = new ByteOrder(u"LITTLE_ENDIAN"_j);
        {
            if(isNativeBigEndian())
                NATIVE_ = BIG_ENDIAN_;
            else
                NATIVE_ = LITTLE_ENDIAN_;
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::nio::ByteOrder::getClass0()
{
    return class_();
}

