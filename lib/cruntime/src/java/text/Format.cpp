// Generated from /runtime/java/text/Format.java
#include <java/text/Format.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/FieldPosition.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::text::Format::Format(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::Format::Format()
    : Format(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* java::text::Format::format(::java::lang::Object* o)
{
    return npc(format(o, new ::java::lang::StringBuffer(), new FieldPosition(int32_t(0))))->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::Format::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.Format", 16);
    return c;
}

java::lang::Class* java::text::Format::getClass0()
{
    return class_();
}

