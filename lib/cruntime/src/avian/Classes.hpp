// Generated from /runtime/avian/Classes.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

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

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Method, AccessibleObjectArray, MemberArray > MethodArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class avian::Classes
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t LinkFlag { int32_t(256) };

public:
    static VMClass* defineVMClass(::java::lang::ClassLoader* loader, ::int8_tArray* b, int32_t offset, int32_t length);
    static VMClass* primitiveClass(char16_t name);
    static void initialize(VMClass* vmClass);
    static bool isAssignableFrom(VMClass* a, VMClass* b);
    static VMClass* getVMClass(::java::lang::Object* o);

private:
    static VMClass* resolveVMClass(::java::lang::ClassLoader* loader, ::int8_tArray* spec) /* throws(ClassNotFoundException) */;
    static VMClass* loadVMClass(::java::lang::ClassLoader* loader, ::int8_tArray* nameBytes, int32_t offset, int32_t length);
    static ::java::lang::Object* parseAnnotationValue(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */;
    static ::java::lang::ObjectArray* parseAnnotation(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */;
    static ::java::lang::ObjectArray* parseAnnotationTable(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */;
    static void parseAnnotationTable(::java::lang::ClassLoader* loader, Addendum* addendum);
    static int32_t resolveSpec(::java::lang::ClassLoader* loader, ::int8_tArray* spec, int32_t start);

public:
    static void link(VMClass* c, ::java::lang::ClassLoader* loader);
    static void link(VMClass* c);
    static ::java::lang::Class* forName(::java::lang::String* name, bool initialize, ::java::lang::ClassLoader* loader) /* throws(ClassNotFoundException) */;
    static ::java::lang::Class* forCanonicalName(::java::lang::String* name);
    static ::java::lang::Class* forCanonicalName(::java::lang::ClassLoader* loader, ::java::lang::String* name);

private:
    static int32_t next(char16_t c, ::java::lang::String* s, int32_t start);

public:
    static ::java::lang::ClassArray* getParameterTypes(VMMethod* vmMethod);
    static int32_t findField(VMClass* vmClass, ::java::lang::String* name);
    static ::java::lang::String* toString(::int8_tArray* array);
    static bool match(::java::lang::ClassArray* a, ::java::lang::ClassArray* b);
    static int32_t findMethod(VMClass* vmClass, ::java::lang::String* name, ::java::lang::ClassArray* parameterTypes);
    static int32_t countMethods(VMClass* vmClass, bool publicOnly);
    static ::java::lang::reflect::MethodArray* getMethods(VMClass* vmClass, bool publicOnly);
    static ::java::lang::annotation::Annotation* getAnnotation(::java::lang::ClassLoader* loader, ::java::lang::ObjectArray* a);
    static ::java::lang::reflect::Method* makeMethod(::java::lang::Class* c, int32_t slot);

private:
    static void acquireClassLock();
    static void releaseClassLock();

    // Generated

public:
    Classes();
protected:
    Classes(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* toString();

private:
    virtual ::java::lang::Class* getClass0();
};
