// Generated from /runtime/java/lang/annotation/ElementType.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::ElementType, ::java::lang::EnumArray > ElementTypeArray;
        } // annotation
    } // lang
} // java

struct default_init_tag;

class java::lang::annotation::ElementType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ElementType *ANNOTATION_TYPE;
    static ElementType *CONSTRUCTOR;
    static ElementType *FIELD;
    static ElementType *LOCAL_VARIABLE;
    static ElementType *METHOD;
    static ElementType *PACKAGE;
    static ElementType *PARAMETER;
    static ElementType *TYPE;

    // Generated

public:
    ElementType(::java::lang::String* name, int ordinal);
protected:
    ElementType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ElementType* valueOf(::java::lang::String* a0);
    static ElementTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
