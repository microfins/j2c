// Generated from /runtime/java/util/logging/Logger.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/logging/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class java::util::logging::Logger
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* name {  };
    Level* levelValue {  };
    static ::java::util::ArrayList* handlers_;
    static Logger* rootLogger_;
    Logger* parent {  };

public:
    static Logger* getLogger(::java::lang::String* name);
protected:
    void ctor(::java::lang::String* name);

public:
    virtual HandlerArray* getHandlers();
    virtual void addHandler(Handler* handler);
    virtual void removeHandler(Handler* handler);
    virtual Logger* getParent();
    virtual void fine(::java::lang::String* message);
    virtual void info(::java::lang::String* message);
    virtual void warning(::java::lang::String* message);
    virtual void severe(::java::lang::String* message);
    virtual void log(Level* level, ::java::lang::String* message);
    virtual void log(Level* level, ::java::lang::String* message, ::java::lang::Throwable* exception);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Throwable* thrown);
    virtual Level* getLevel();

private:
    Level* getEffectiveLevel();
    void log(Level* level, ::avian::VMMethod* caller, ::java::lang::String* message, ::java::lang::Throwable* exception);
    void publish(LogRecord* logRecord);

public:
    virtual void setLevel(Level* level);
    virtual bool isLoggable(Level* level);

    // Generated

private:
    Logger(::java::lang::String* name);
protected:
    Logger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::java::util::ArrayList*& handlers();
    static Logger*& rootLogger();
    virtual ::java::lang::Class* getClass0();
    friend class Logger_DefaultHandler;
};
