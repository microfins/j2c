// Generated from /runtime/java/util/IdentityHashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::IdentityHashMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

private:
    HashMap* map {  };
protected:
    void ctor(int32_t capacity);
    void ctor();

public:
    bool isEmpty() override;
    int32_t size() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* elts) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    void clear() override;
    Set* entrySet() override;
    Set* keySet() override;
    Collection* values() override;

    // Generated
    IdentityHashMap(int32_t capacity);
    IdentityHashMap();
protected:
    IdentityHashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class IdentityHashMap_MyHelper;
};
