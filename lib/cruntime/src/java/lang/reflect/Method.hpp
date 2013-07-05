// Generated from /runtime/java/lang/reflect/Method.java

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

class java::lang::reflect::Method
    : public AccessibleObject
    , public virtual Member
{

public:
    typedef AccessibleObject super;

private:
    ::avian::VMMethod* vmMethod {  };
    bool accessible {  };
protected:
    void ctor(::avian::VMMethod* vmMethod);

public:
    bool isAccessible() override;
    void setAccessible(bool v) override;
    static ::avian::VMMethod* getCaller();
    ::java::lang::Class* getDeclaringClass() override;
    int32_t getModifiers() override;
    ::java::lang::String* getName() override;
    static ::java::lang::String* getName(::avian::VMMethod* vmMethod);

private:
    ::java::lang::String* getSpec();

public:
    static ::java::lang::String* getSpec(::avian::VMMethod* vmMethod);
    virtual ::java::lang::ClassArray* getParameterTypes();
    virtual ::java::lang::Object* invoke(::java::lang::Object* instance, ::java::lang::ObjectArray*/*...*/ arguments) /* throws(InvocationTargetException, IllegalAccessException) */;

private:
    static ::java::lang::Object* invoke(::avian::VMMethod* method, ::java::lang::Object* instance, ::java::lang::ObjectArray*/*...*/ arguments) /* throws(InvocationTargetException, IllegalAccessException) */;

public:
    virtual ::java::lang::Class* getReturnType();
    /* <T extends Annotation> */::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* class__) override;
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;

    // Generated
    Method(::avian::VMMethod* vmMethod);
protected:
    Method(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void setAccessible(AccessibleObjectArray* array, bool v);

private:
    virtual ::java::lang::Class* getClass0();
};
