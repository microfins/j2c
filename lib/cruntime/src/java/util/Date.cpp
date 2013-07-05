// Generated from /runtime/java/util/Date.java
#include <java/util/Date.hpp>

#include <java/lang/String.hpp>
#include <java/lang/System.hpp>

java::util::Date::Date(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Date::Date() 
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Date::Date(int64_t when) 
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(when);
}

void java::util::Date::ctor()
{
    super::ctor();
    when = ::java::lang::System::currentTimeMillis();
}

void java::util::Date::ctor(int64_t when)
{
    super::ctor();
    this->when = when;
}

int64_t java::util::Date::getTime()
{
    return when;
}

java::lang::String* java::util::Date::toString()
{
    return toString(when);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Date::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Date", 14);
    return c;
}

java::lang::Class* java::util::Date::getClass0()
{
    return class_();
}

