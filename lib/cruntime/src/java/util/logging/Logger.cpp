// Generated from /runtime/java/util/logging/Logger.java
#include <java/util/logging/Logger.hpp>

#include <avian/VMMethod.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/Level.hpp>
#include <java/util/logging/LogRecord.hpp>
#include <java/util/logging/Logger_DefaultHandler.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
        namespace logging
        {
typedef ::SubArray< ::java::util::logging::Handler, ::java::lang::ObjectArray > HandlerArray;
        } // logging
    } // util
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::logging::Logger::Logger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Logger::Logger(::java::lang::String* name) 
    : Logger(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::util::logging::Logger::init()
{
    levelValue = nullptr;
}

java::util::ArrayList*& java::util::logging::Logger::handlers()
{
    clinit();
    return handlers_;
}
java::util::ArrayList* java::util::logging::Logger::handlers_;

java::util::logging::Logger*& java::util::logging::Logger::rootLogger()
{
    clinit();
    return rootLogger_;
}
java::util::logging::Logger* java::util::logging::Logger::rootLogger_;

java::util::logging::Logger* java::util::logging::Logger::getLogger(::java::lang::String* name)
{
    clinit();
    if(npc(name)->equals(static_cast< ::java::lang::Object* >(u""_j)))
        return rootLogger_;

    auto logger = new Logger(name);
    npc(logger)->parent = rootLogger_;
    return logger;
}

void java::util::logging::Logger::ctor(::java::lang::String* name)
{
    super::ctor();
    init();
    this->name = name;
}

java::util::logging::HandlerArray* java::util::logging::Logger::getHandlers()
{
    return java_cast< HandlerArray* >(npc(handlers_)->toArray_(static_cast< ::java::lang::ObjectArray* >(new HandlerArray(npc(handlers_)->size()))));
}

void java::util::logging::Logger::addHandler(Handler* handler)
{
    npc(handlers_)->add(static_cast< ::java::lang::Object* >(handler));
}

void java::util::logging::Logger::removeHandler(Handler* handler)
{
    npc(handlers_)->remove(static_cast< ::java::lang::Object* >(handler));
}

java::util::logging::Logger* java::util::logging::Logger::getParent()
{
    return parent;
}

void java::util::logging::Logger::fine(::java::lang::String* message)
{
    log(Level::FINE(), ::java::lang::reflect::Method::getCaller(), message, nullptr);
}

void java::util::logging::Logger::info(::java::lang::String* message)
{
    log(Level::INFO(), ::java::lang::reflect::Method::getCaller(), message, nullptr);
}

void java::util::logging::Logger::warning(::java::lang::String* message)
{
    log(Level::WARNING(), ::java::lang::reflect::Method::getCaller(), message, nullptr);
}

void java::util::logging::Logger::severe(::java::lang::String* message)
{
    log(Level::SEVERE(), ::java::lang::reflect::Method::getCaller(), message, nullptr);
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* message)
{
    log(level, ::java::lang::reflect::Method::getCaller(), message, nullptr);
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* message, ::java::lang::Throwable* exception)
{
    log(level, ::java::lang::reflect::Method::getCaller(), message, exception);
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg)
{
    if(!isLoggable(level)) {
        return;
    }
    publish(new LogRecord(name, sourceMethod, level, msg, nullptr));
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Throwable* thrown)
{
    if(!isLoggable(level)) {
        return;
    }
    publish(new LogRecord(name, sourceMethod, level, msg, thrown));
}

java::util::logging::Level* java::util::logging::Logger::getLevel()
{
    return levelValue;
}

java::util::logging::Level* java::util::logging::Logger::getEffectiveLevel()
{
    auto logger = this;
    while (npc(logger)->levelValue == nullptr) {
        logger = npc(logger)->getParent();
    }
    return npc(logger)->getLevel();
}

void java::util::logging::Logger::log(Level* level, ::avian::VMMethod* caller, ::java::lang::String* message, ::java::lang::Throwable* exception)
{
    if(npc(level)->intValue() < npc(getEffectiveLevel())->intValue()) {
        return;
    }
    auto r = new LogRecord(name, caller == nullptr ? u"<unknown>"_j : ::java::lang::reflect::Method::getName(caller), level, message, exception);
    publish(r);
}

void java::util::logging::Logger::publish(LogRecord* logRecord)
{
    for (auto _i = npc(handlers_)->iterator(); _i->hasNext(); ) {
        Handler* h = java_cast< Handler* >(_i->next());
        {
            npc(h)->publish(logRecord);
        }
    }
}

void java::util::logging::Logger::setLevel(Level* level)
{
    levelValue = level;
}

bool java::util::logging::Logger::isLoggable(Level* level)
{
    return npc(level)->intValue() >= npc(levelValue)->intValue();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Logger::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Logger", 24);
    return c;
}

void java::util::logging::Logger::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            rootLogger_ = new Logger(u""_j);
            npc(rootLogger_)->setLevel(Level::INFO());
            handlers_ = new ::java::util::ArrayList();
            npc(handlers_)->add(static_cast< ::java::lang::Object* >(new Logger_DefaultHandler()));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::logging::Logger::getClass0()
{
    return class_();
}

