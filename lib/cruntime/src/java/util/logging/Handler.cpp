// Generated from /runtime/java/util/logging/Handler.java
#include <java/util/logging/Handler.hpp>

java::util::logging::Handler::Handler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Handler::Handler()
    : Handler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::logging::Handler::publish(LogRecord* r)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Handler::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Handler", 25);
    return c;
}

java::lang::Class* java::util::logging::Handler::getClass0()
{
    return class_();
}

