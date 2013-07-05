// Generated from /runtime/java/lang/reflect/AnnotatedElement.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation
    } // lang
} // java

struct java::lang::reflect::AnnotatedElement
    : public virtual ::java::lang::Object
{
    virtual bool isAnnotationPresent(::java::lang::Class* class__) = 0;
    virtual /* <T extends Annotation> */::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* class__) = 0;
    virtual ::java::lang::annotation::AnnotationArray* getAnnotations() = 0;
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
