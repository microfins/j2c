// Generated from /runtime/java/util/logging/Level.java
#include <java/util/logging/Level.hpp>

#include <java/lang/String.hpp>

java::util::logging::Level::Level(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Level::Level(::java::lang::String* name, int32_t value) 
    : Level(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,value);
}

java::util::logging::Level*& java::util::logging::Level::FINEST()
{
    clinit();
    return FINEST_;
}
java::util::logging::Level* java::util::logging::Level::FINEST_;

java::util::logging::Level*& java::util::logging::Level::FINER()
{
    clinit();
    return FINER_;
}
java::util::logging::Level* java::util::logging::Level::FINER_;

java::util::logging::Level*& java::util::logging::Level::FINE()
{
    clinit();
    return FINE_;
}
java::util::logging::Level* java::util::logging::Level::FINE_;

java::util::logging::Level*& java::util::logging::Level::INFO()
{
    clinit();
    return INFO_;
}
java::util::logging::Level* java::util::logging::Level::INFO_;

java::util::logging::Level*& java::util::logging::Level::WARNING()
{
    clinit();
    return WARNING_;
}
java::util::logging::Level* java::util::logging::Level::WARNING_;

java::util::logging::Level*& java::util::logging::Level::SEVERE()
{
    clinit();
    return SEVERE_;
}
java::util::logging::Level* java::util::logging::Level::SEVERE_;

void java::util::logging::Level::ctor(::java::lang::String* name, int32_t value)
{
    super::ctor();
    this->name = name;
    this->value = value;
}

int32_t java::util::logging::Level::intValue()
{
    return value;
}

java::lang::String* java::util::logging::Level::getName()
{
    return name;
}

java::lang::String* java::util::logging::Level::toString()
{
    return name;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Level::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Level", 23);
    return c;
}

void java::util::logging::Level::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FINEST_ = new Level(u"FINEST"_j, int32_t(300));
        FINER_ = new Level(u"FINER"_j, int32_t(400));
        FINE_ = new Level(u"FINE"_j, int32_t(500));
        INFO_ = new Level(u"INFO"_j, int32_t(800));
        WARNING_ = new Level(u"WARNING"_j, int32_t(900));
        SEVERE_ = new Level(u"SEVERE"_j, int32_t(1000));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::logging::Level::getClass0()
{
    return class_();
}

