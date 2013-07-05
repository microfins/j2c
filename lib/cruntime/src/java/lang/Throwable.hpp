// Generated from /runtime/java/lang/Throwable.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray > StackTraceElementArray;
    } // lang
} // java

struct default_init_tag;

class java::lang::Throwable
    : public virtual Object
    , public virtual ::java::io::Serializable
{

public:
    typedef Object super;

private:
    String* message {  };
    Object* trace_ {  };
    Throwable* cause {  };
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

public:
    virtual Throwable* getCause();
    virtual Throwable* initCause(Throwable* e);
    virtual String* getMessage();
    virtual String* getLocalizedMessage();
    String* toString() override;

private:
    static Object* trace(int32_t skipCount);

public: /* package */
    static StackTraceElementArray* resolveTrace(Object* trace);

private:
    StackTraceElementArray* resolveTrace();

public:
    virtual StackTraceElementArray* getStackTrace();
    virtual void setStackTrace(StackTraceElementArray* trace);
    virtual void printStackTrace(::java::io::PrintStream* out);
    virtual void printStackTrace(::java::io::PrintWriter* out);
    virtual void printStackTrace();

private:
    void printStackTrace(StringBuilder* sb, String* nl);

public:
    virtual Throwable* fillInStackTrace();

    // Generated
    Throwable(String* message, Throwable* cause);
    Throwable(String* message);
    Throwable(Throwable* cause);
    Throwable();
protected:
    Throwable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
