// Generated from /runtime/java/lang/StackTraceElement.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::StackTraceElement
    : public virtual Object
{

public:
    typedef Object super;

private:
    static int32_t NativeLine_;
    String* class__ {  };
    String* method {  };
    String* file {  };
    int32_t line {  };
protected:
    void ctor(String* class__, String* method, String* file, int32_t line);

public:
    int32_t hashCode() override;
    bool equals(Object* o) override;
    String* toString() override;
    virtual String* getClassName();
    virtual String* getMethodName();
    virtual String* getFileName();
    virtual int32_t getLineNumber();
    virtual bool isNativeMethod();

    // Generated
    StackTraceElement(String* class__, String* method, String* file, int32_t line);
protected:
    StackTraceElement(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int32_t& NativeLine();
    virtual ::java::lang::Class* getClass0();
};
