// Generated from /runtime/avian/VMClass.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace avian
{
typedef ::SubArray< ::avian::VMField, ::java::lang::ObjectArray > VMFieldArray;
typedef ::SubArray< ::avian::VMMethod, ::java::lang::ObjectArray > VMMethodArray;
} // avian

struct default_init_tag;

class avian::VMClass
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int16_t flags {  };
    int16_t vmFlags {  };
    int16_t fixedSize {  };
    int8_t arrayElementSize {  };
    int8_t arrayDimensions {  };
    int32_t runtimeDataIndex {  };
    ::int32_tArray* objectMask {  };
    ::int8_tArray* name {  };
    ::int8_tArray* sourceFile {  };
    VMClass* super_ {  };
    ::java::lang::ObjectArray* interfaceTable {  };
    VMMethodArray* virtualTable {  };
    VMFieldArray* fieldTable {  };
    VMMethodArray* methodTable {  };
    ClassAddendum* addendum {  };
    ::java::lang::Object* staticTable {  };
    ::java::lang::ClassLoader* loader {  };
    ::int8_tArray* source {  };

    // Generated
    VMClass();
protected:
    VMClass(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
