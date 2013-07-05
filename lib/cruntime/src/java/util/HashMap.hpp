// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::HashMap_Cell, ::java::lang::ObjectArray, Map_EntryArray > HashMap_CellArray;
    } // util
} // java

struct default_init_tag;

class java::util::HashMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MinimumCapacity { int32_t(16) };
    int32_t size_ {  };
    HashMap_CellArray* array {  };
    HashMap_Helper* helper {  };
protected:
    void ctor(int32_t capacity, HashMap_Helper* helper);
    void ctor(int32_t capacity);
    void ctor();
    void ctor(Map* map);

public:
    ::java::lang::String* toString() override;

private:
    static int32_t nextPowerOfTwo(int32_t n);

public:
    bool isEmpty() override;
    int32_t size() override;

private:
    void grow();
    void shrink();
    void resize(int32_t capacity);
    HashMap_Cell* find(::java::lang::Object* key);
    void insert(HashMap_Cell* cell);

public:
    virtual void remove(HashMap_Cell* cell);

private:
    HashMap_Cell* putCell(::java::lang::Object* key, ::java::lang::Object* value);

public:
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    virtual HashMap_Cell* removeCell(::java::lang::Object* key);
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* elts) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    void clear() override;
    Set* entrySet() override;
    Set* keySet() override;
    Collection* values() override;

public: /* package */
    virtual Iterator* iterator();

    // Generated

public:
    HashMap(int32_t capacity, HashMap_Helper* helper);
    HashMap(int32_t capacity);
    HashMap();
    HashMap(Map* map);
protected:
    HashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyCell;
    friend class HashMap_MyHelper;
    friend class HashMap_EntrySet;
    friend class HashMap_KeySet;
    friend class HashMap_Values;
    friend class HashMap_MyIterator;
};
