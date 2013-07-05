// Generated from /runtime/java/lang/StackOverflowError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/VirtualMachineError.hpp>

struct default_init_tag;

class java::lang::StackOverflowError
    : public VirtualMachineError
{

public:
    typedef VirtualMachineError super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    StackOverflowError(String* message);
    StackOverflowError();
protected:
    StackOverflowError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
