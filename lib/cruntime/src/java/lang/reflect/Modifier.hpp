// Generated from /runtime/java/lang/reflect/Modifier.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::reflect::Modifier final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t PUBLIC { int32_t(1) };
    static constexpr int32_t PRIVATE { int32_t(2) };
    static constexpr int32_t PROTECTED { int32_t(4) };
    static constexpr int32_t STATIC { int32_t(8) };
    static constexpr int32_t FINAL { int32_t(16) };
    static constexpr int32_t SUPER { int32_t(32) };
    static constexpr int32_t SYNCHRONIZED { int32_t(32) };
    static constexpr int32_t VOLATILE { int32_t(64) };
    static constexpr int32_t TRANSIENT { int32_t(128) };
    static constexpr int32_t NATIVE { int32_t(256) };
    static constexpr int32_t INTERFACE { int32_t(512) };
    static constexpr int32_t ABSTRACT { int32_t(1024) };
    static constexpr int32_t STRICT { int32_t(2048) };
protected:
    void ctor();

public:
    static bool isPublic(int32_t v);
    static bool isPrivate(int32_t v);
    static bool isProtected(int32_t v);
    static bool isStatic(int32_t v);
    static bool isFinal(int32_t v);
    static bool isSuper(int32_t v);
    static bool isNative(int32_t v);
    static bool isAbstract(int32_t v);
    static bool isInterface(int32_t v);

    // Generated

private:
    Modifier();
protected:
    Modifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
