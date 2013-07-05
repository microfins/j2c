// Generated from /runtime/java/util/Map.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::Map
    : public virtual ::java::lang::Object
{
    virtual bool isEmpty() = 0;
    virtual int32_t size() = 0;
    virtual bool containsKey(::java::lang::Object* obj) = 0;
    virtual bool containsValue(::java::lang::Object* obj) = 0;
    virtual ::java::lang::Object* get(::java::lang::Object* key) = 0;
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) = 0;
    virtual void putAll(Map* elts) = 0;
    virtual ::java::lang::Object* remove(::java::lang::Object* key) = 0;
    virtual void clear() = 0;
    virtual Set* entrySet() = 0;
    virtual Set* keySet() = 0;
    virtual Collection* values() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
