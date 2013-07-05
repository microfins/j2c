// Generated from /runtime/java/util/WeakHashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/ref/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::WeakHashMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

private:
    HashMap* map {  };
    ::java::lang::ref::ReferenceQueue* queue {  };
protected:
    void ctor(int32_t capacity);
    void ctor();

private:
    void poll();

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
    WeakHashMap(int32_t capacity);
    WeakHashMap();
protected:
    WeakHashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class WeakHashMap_MyCell;
    friend class WeakHashMap_MyHelper;
};
