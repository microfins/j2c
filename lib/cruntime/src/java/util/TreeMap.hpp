// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::TreeMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

private:
    TreeSet* set {  };
protected:
    void ctor(Comparator* comparator);
    void ctor();

public:
    ::java::lang::String* toString() override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* elts) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    void clear() override;
    int32_t size() override;
    bool isEmpty() override;
    bool containsKey(::java::lang::Object* key) override;

private:
    bool equal(::java::lang::Object* a, ::java::lang::Object* b);

public:
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    Set* keySet() override;
    Collection* values() override;

    // Generated
    TreeMap(Comparator* comparator);
    TreeMap();
protected:
    TreeMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap_TreeMap_1;
    friend class TreeMap_TreeMap_2;
    friend class TreeMap_MyEntry;
    friend class TreeMap_KeySet;
    friend class TreeMap_Values;
};
