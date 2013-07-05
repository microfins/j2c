// Generated from /runtime/java/lang/Class.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Type.hpp>

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
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Constructor, AccessibleObjectArray, MemberArray > ConstructorArray;
typedef ::SubArray< ::java::lang::reflect::Field, AccessibleObjectArray > FieldArray;
typedef ::SubArray< ::java::lang::reflect::Method, AccessibleObjectArray, MemberArray > MethodArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class java::lang::Class final
    : public virtual Object
    , public ::java::lang::reflect::AnnotatedElement
    , public ::java::lang::reflect::Type
{

public:
    typedef Object super;

private:
    static constexpr int32_t PrimitiveFlag { int32_t(32) };
    static constexpr int32_t EnumFlag { int32_t(16384) };

public:
    ::avian::VMClass* vmClass {  };
protected:
    void ctor(::avian::VMClass* vmClass);

public:
    String* toString() override;

private:
    static ::int8_tArray* replace(int32_t a, int32_t b, ::int8_tArray* s, int32_t offset, int32_t length);

public:
    String* getName();
    static String* getName(::avian::VMClass* c);
    String* getCanonicalName();
    String* getSimpleName();
    Object* newInstance() /* throws(IllegalAccessException, InstantiationException) */;
    static Class* forName(String* name) /* throws(ClassNotFoundException) */;
    static Class* forName(String* name, bool initialize, ClassLoader* loader) /* throws(ClassNotFoundException) */;
    Class* getComponentType();
    bool isAssignableFrom(Class* c);
    ::java::lang::reflect::Field* getDeclaredField(String* name) /* throws(NoSuchFieldException) */;
    ::java::lang::reflect::Field* getField(String* name) /* throws(NoSuchFieldException) */;
    ::java::lang::reflect::Method* getDeclaredMethod(String* name, ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */;
    ::java::lang::reflect::Method* getMethod(String* name, ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */;
    ::java::lang::reflect::Constructor* getConstructor(ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */;
    ::java::lang::reflect::Constructor* getDeclaredConstructor(ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */;

private:
    int32_t countConstructors(bool publicOnly);

public:
    ::java::lang::reflect::ConstructorArray* getDeclaredConstructors();
    ::java::lang::reflect::ConstructorArray* getConstructors();
    ::java::lang::reflect::FieldArray* getDeclaredFields();

private:
    int32_t countPublicFields();

public:
    ::java::lang::reflect::FieldArray* getFields();

private:
    static void getAllFields(::avian::VMClass* vmClass, ::java::util::ArrayList* fields);

public:
    ::java::lang::reflect::FieldArray* getAllFields();
    ::java::lang::reflect::MethodArray* getDeclaredMethods();
    ::java::lang::reflect::MethodArray* getMethods();
    ClassArray* getInterfaces();
    ObjectArray* getEnumConstants();
    ClassLoader* getClassLoader();
    int32_t getModifiers();
    bool isInterface();
    Class* getSuperclass();
    bool isArray_();
    static bool isInstance(::avian::VMClass* c, Object* o);
    bool isInstance(Object* o);
    bool isPrimitive();
    bool isEnum();
    ::java::net::URL* getResource(String* path);
    ::java::io::InputStream* getResourceAsStream(String* path);
    bool desiredAssertionStatus();
    /* <T> */Class* asSubclass(Class* c);
    Object* cast(Object* o);
    Package* getPackage();
    bool isAnnotationPresent(Class* class__) override;

private:
    static ::java::lang::annotation::Annotation* getAnnotation(::avian::VMClass* c, ObjectArray* a);

public:
    /* <T extends Annotation> */::java::lang::annotation::Annotation* getAnnotation(Class* class__) override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;

private:
    int32_t countAnnotations();

public:
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::security::ProtectionDomain* getProtectionDomain();

    // Generated
    Class(::avian::VMClass* vmClass);
protected:
    Class(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
