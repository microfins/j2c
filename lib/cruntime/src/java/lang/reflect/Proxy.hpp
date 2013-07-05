// Generated from /runtime/java/lang/reflect/Proxy.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
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
    } // lang
} // java

struct default_init_tag;

class java::lang::reflect::Proxy
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static int32_t nextNumber_;

public: /* protected */
    InvocationHandler* h {  };

public:
    static ::java::lang::Class* getProxyClass(::java::lang::ClassLoader* loader, ::java::lang::ClassArray*/*...*/ interfaces);
    static bool isProxyClass(::java::lang::Class* c);
    static InvocationHandler* getInvocationHandler(::java::lang::Object* proxy);

private:
    static ::int8_tArray* makeInvokeCode(::java::util::List* pool, ::java::lang::String* className, ::int8_tArray* spec, int32_t parameterCount, int32_t parameterFootprint, int32_t index) /* throws(IOException) */;
    static ::int8_tArray* makeConstructorCode(::java::util::List* pool) /* throws(IOException) */;
    static ::java::lang::Class* makeClass(::java::lang::ClassLoader* loader, ::java::lang::ClassArray* interfaces, ::java::lang::String* name) /* throws(IOException) */;

public:
    static ::java::lang::Object* newProxyInstance(::java::lang::ClassLoader* loader, ::java::lang::ClassArray* interfaces, InvocationHandler* handler);

    // Generated
    Proxy();
protected:
    Proxy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static int32_t& nextNumber();
    virtual ::java::lang::Class* getClass0();
};
