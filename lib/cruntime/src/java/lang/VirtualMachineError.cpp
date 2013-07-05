// Generated from /runtime/java/lang/VirtualMachineError.java
#include <java/lang/VirtualMachineError.hpp>

java::lang::VirtualMachineError::VirtualMachineError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::VirtualMachineError::VirtualMachineError(String* message) 
    : VirtualMachineError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::VirtualMachineError::VirtualMachineError() 
    : VirtualMachineError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::VirtualMachineError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::VirtualMachineError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::VirtualMachineError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.VirtualMachineError", 29);
    return c;
}

java::lang::Class* java::lang::VirtualMachineError::getClass0()
{
    return class_();
}

