// Generated from /runtime/java/lang/VirtualMachineError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::VirtualMachineError
    : public Error
{

public:
    typedef Error super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    VirtualMachineError(String* message);
    VirtualMachineError();
protected:
    VirtualMachineError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
