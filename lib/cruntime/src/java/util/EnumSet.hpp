// Generated from /runtime/java/util/EnumSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
    } // lang
} // java

struct default_init_tag;

class java::util::EnumSet
    : public AbstractSet
{

public:
    typedef AbstractSet super;

private:
    BitSet* bitset {  };
    ::java::lang::Class* elementType {  };
protected:
    void ctor(int32_t size, ::java::lang::Class* type);

public:
    virtual bool add(::java::lang::Enum* element);
    bool remove(::java::lang::Object* toRemove) override;
    bool contains(::java::lang::Object* toCheck) override;
    int32_t size() override;
    Iterator* iterator() override;
    static /* <T extends Enum<T>> */EnumSet* allOf(::java::lang::Class* elementType);
    static /* <T extends Enum<T>> */EnumSet* noneOf(::java::lang::Class* elementType);
    static /* <T extends Enum<T>> */EnumSet* of(::java::lang::Enum* first, ::java::lang::EnumArray*/*...*/ rest);
    static /* <T extends Enum<T>> */EnumSet* complementOf(EnumSet* s);
    static /* <T extends Enum<T>> */EnumSet* copyOf(EnumSet* s);

private:
    static /* <T extends Enum<T>> */EnumSet* createEmptyEnumSet(::java::lang::Class* elementType);
    static /* <T extends Enum<T>> */void addAllElementsToSet(::java::lang::Iterable* elements, EnumSet* enumSet);
    ::java::lang::Enum* tryToCast(::java::lang::Object* object) /* throws(ClassCastException) */;

    // Generated
    EnumSet(int32_t size, ::java::lang::Class* type);
protected:
    EnumSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* element) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EnumSet_EnumSetIterator;
};
