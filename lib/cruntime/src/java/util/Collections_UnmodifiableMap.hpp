// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

private:
    Map* inner {  };
protected:
    void ctor(Map* m);

public:
    void clear() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    bool isEmpty() override;
    Set* keySet() override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* t) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    int32_t size() override;
    Collection* values() override;

    // Generated

public: /* package */
    Collections_UnmodifiableMap(Map* m);
protected:
    Collections_UnmodifiableMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedCollection;
    friend class Collections_SynchronizedMap;
    friend class Collections_SynchronizedSet;
    friend class Collections_SynchronizedIterator;
    friend class Collections_ArrayListIterator;
    friend class Collections_UnmodifiableList;
    friend class Collections_UnmodifiableSet;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
