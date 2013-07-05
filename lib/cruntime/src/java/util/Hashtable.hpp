// Generated from /runtime/java/util/Hashtable.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::Hashtable
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
    void ctor(Map* m);

public:
    ::java::lang::String* toString() override;
    bool isEmpty() override;
    int32_t size() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* elts) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    void clear() override;
    virtual Enumeration* keys();
    virtual Enumeration* elements();
    Set* entrySet() override;
    Set* keySet() override;
    Collection* values() override;

    // Generated
    Hashtable(int32_t capacity);
    Hashtable();
    Hashtable(Map* m);
protected:
    Hashtable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
