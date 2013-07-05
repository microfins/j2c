// Generated from /runtime/java/lang/reflect/AccessibleObject.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class java::lang::reflect::AccessibleObject
    : public virtual ::java::lang::Object
    , public virtual AnnotatedElement
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    static constexpr int32_t Accessible { int32_t(1) };

public:
    bool isAnnotationPresent(::java::lang::Class* class__) override;
    virtual bool isAccessible() = 0;
    virtual void setAccessible(bool v) = 0;
    static void setAccessible(AccessibleObjectArray* array, bool v);

    // Generated
    AccessibleObject();
protected:
    AccessibleObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
