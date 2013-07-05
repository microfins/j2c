// Generated from /runtime/java/lang/reflect/Constructor.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/Member.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::lang::reflect::AnnotatedElementArray, ::java::lang::reflect::TypeArray > ClassArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class java::lang::reflect::Constructor
    : public AccessibleObject
    , public virtual Member
{

public:
    typedef AccessibleObject super;

private:
    Method* method {  };
protected:
    void ctor(Method* method);

public:
    bool equals(::java::lang::Object* o) override;
    bool isAccessible() override;
    void setAccessible(bool v) override;
    ::java::lang::Class* getDeclaringClass() override;
    virtual ::java::lang::ClassArray* getParameterTypes();
    int32_t getModifiers() override;
    ::java::lang::String* getName() override;
    /* <T extends Annotation> */::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* class__) override;
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;

private:
    static ::java::lang::Object* make(::avian::VMClass* c);

public:
    virtual ::java::lang::Object* newInstance(::java::lang::ObjectArray*/*...*/ arguments) /* throws(InvocationTargetException, InstantiationException, IllegalAccessException) */;

    // Generated
    Constructor(Method* method);
protected:
    Constructor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void setAccessible(AccessibleObjectArray* array, bool v);

private:
    virtual ::java::lang::Class* getClass0();
};
