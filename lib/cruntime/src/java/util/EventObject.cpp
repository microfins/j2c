// Generated from /runtime/java/util/EventObject.java
#include <java/util/EventObject.hpp>

#include <java/lang/Object.hpp>

java::util::EventObject::EventObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::EventObject::EventObject(::java::lang::Object* source) 
    : EventObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(source);
}

void java::util::EventObject::ctor(::java::lang::Object* source)
{
    super::ctor();
    this->source = source;
}

java::lang::Object* java::util::EventObject::getSource()
{
    return source;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::EventObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EventObject", 21);
    return c;
}

java::lang::Class* java::util::EventObject::getClass0()
{
    return class_();
}

