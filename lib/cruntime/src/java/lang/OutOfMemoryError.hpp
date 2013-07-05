// Generated from /runtime/java/lang/OutOfMemoryError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/VirtualMachineError.hpp>

struct default_init_tag;

class java::lang::OutOfMemoryError
    : public VirtualMachineError
{

public:
    typedef VirtualMachineError super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    OutOfMemoryError(String* message);
    OutOfMemoryError();
protected:
    OutOfMemoryError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
