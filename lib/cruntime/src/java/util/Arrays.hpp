// Generated from /runtime/java/util/Arrays.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Arrays
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ::java::lang::String* toString(::java::lang::ObjectArray* a);
    static ::java::lang::String* toString(::int8_tArray* a);

private:
    static bool equal(::java::lang::Object* a, ::java::lang::Object* b);

public:
    static void sort(::java::lang::ObjectArray* array);
    static /* <T> */void sort(::java::lang::ObjectArray* array, Comparator* comparator);
    static int32_t hashCode(::java::lang::ObjectArray* array);
    static bool equals(::java::lang::ObjectArray* a, ::java::lang::ObjectArray* b);
    static /* <T> */List* asList(::java::lang::ObjectArray*/*...*/ array);
    static void fill(::int32_tArray* array, int32_t value);
    static void fill(::char16_tArray* array, char16_t value);
    static /* <T> */void fill(::java::lang::ObjectArray* array, ::java::lang::Object* value);

    // Generated

private:
    Arrays();
protected:
    Arrays(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual ::java::lang::String* toString();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Arrays_sort_1;
    friend class Arrays_asList_2;
};
