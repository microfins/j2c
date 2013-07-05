// Generated from /runtime/avian/VMMethod.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::VMMethod
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int8_t vmFlags {  };
    int8_t returnCode {  };
    int8_t parameterCount {  };
    int8_t parameterFootprint {  };
    int16_t flags {  };
    int16_t offset {  };
    int32_t nativeID {  };
    int32_t runtimeDataIndex {  };
    ::int8_tArray* name {  };
    ::int8_tArray* spec {  };
    MethodAddendum* addendum {  };
    VMClass* class__ {  };
    ::java::lang::Object* code {  };
    virtual bool hasAnnotations();

    // Generated
    VMMethod();
protected:
    VMMethod(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
