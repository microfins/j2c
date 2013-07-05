// Generated from /runtime/java/util/logging/LogRecord.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/logging/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::LogRecord
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* loggerName {  };
    ::java::lang::String* message {  };
    ::java::lang::Throwable* thrown {  };
    Level* level {  };
    ::java::lang::String* methodName {  };
protected:
    void ctor(::java::lang::String* loggerName, ::java::lang::String* methodName, Level* level, ::java::lang::String* message, ::java::lang::Throwable* thrown);

public:
    virtual ::java::lang::String* getLoggerName();
    virtual ::java::lang::String* getMessage();
    virtual ::java::lang::Throwable* getThrown();
    virtual Level* getLevel();
    virtual ::java::lang::String* getSourceMethodName();

    // Generated

public: /* package */
    LogRecord(::java::lang::String* loggerName, ::java::lang::String* methodName, Level* level, ::java::lang::String* message, ::java::lang::Throwable* thrown);
protected:
    LogRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
