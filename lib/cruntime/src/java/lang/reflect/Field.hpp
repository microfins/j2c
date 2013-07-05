// Generated from /runtime/java/lang/reflect/Field.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class java::lang::reflect::Field
    : public AccessibleObject
{

public:
    typedef AccessibleObject super;

private:
    static constexpr int32_t VoidField { int32_t(0) };
    static constexpr int32_t ByteField { int32_t(1) };
    static constexpr int32_t CharField { int32_t(2) };
    static constexpr int32_t DoubleField { int32_t(3) };
    static constexpr int32_t FloatField { int32_t(4) };
    static constexpr int32_t IntField { int32_t(5) };
    static constexpr int32_t LongField { int32_t(6) };
    static constexpr int32_t ShortField { int32_t(7) };
    static constexpr int32_t BooleanField { int32_t(8) };
    static constexpr int32_t ObjectField { int32_t(9) };
    ::avian::VMField* vmField {  };
    bool accessible {  };
protected:
    void ctor(::avian::VMField* vmField);

public:
    bool isAccessible() override;
    void setAccessible(bool v) override;
    virtual ::java::lang::Class* getDeclaringClass();
    virtual int32_t getModifiers();
    virtual ::java::lang::String* getName();
    static ::java::lang::String* getName(::avian::VMField* vmField);
    virtual ::java::lang::Class* getType();
    virtual ::java::lang::Object* get(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual bool getBoolean(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual int8_t getByte(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual int16_t getShort(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual char16_t getChar(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual int32_t getInt(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual float getFloat(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual int64_t getLong(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual double getDouble(::java::lang::Object* instance) /* throws(IllegalAccessException) */;
    virtual void set(::java::lang::Object* instance, ::java::lang::Object* value) /* throws(IllegalAccessException) */;

private:
    ::java::lang::annotation::Annotation* getAnnotation(::java::lang::ObjectArray* a);

public:
    /* <T extends Annotation> */::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* class__) override;
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;

private:
    static int64_t getPrimitive(::java::lang::Object* instance, int32_t code, int32_t offset);
    static ::java::lang::Object* getObject(::java::lang::Object* instance, int32_t offset);
    static void setPrimitive(::java::lang::Object* instance, int32_t code, int32_t offset, int64_t value);
    static void setObject(::java::lang::Object* instance, int32_t offset, ::java::lang::Object* value);

    // Generated

public:
    Field(::avian::VMField* vmField);
protected:
    Field(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    static void setAccessible(AccessibleObjectArray* array, bool v);

private:
    virtual ::java::lang::Class* getClass0();
};
