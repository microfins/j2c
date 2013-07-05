// Generated from /runtime/avian/VMField.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::VMField
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int8_t vmFlags {  };
    int8_t code {  };
    int16_t flags {  };
    int16_t offset {  };
    int32_t nativeID {  };
    ::int8_tArray* name {  };
    ::int8_tArray* spec {  };
    FieldAddendum* addendum {  };
    VMClass* class__ {  };

    // Generated
    VMField();
protected:
    VMField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
