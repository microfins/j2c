// Generated from /runtime/java/util/Arrays.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractList.hpp>

struct default_init_tag;

class java::util::Arrays_asList_2
    : public AbstractList
{

public:
    typedef AbstractList super;
    int32_t size() override;
    void add(int32_t index, ::java::lang::Object* element) override;
    int32_t indexOf(::java::lang::Object* element) override;
    int32_t lastIndexOf(::java::lang::Object* element) override;
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* value) override;
    ::java::lang::Object* remove(int32_t index) override;
    ListIterator* listIterator(int32_t index) override;

    // Generated
    Arrays_asList_2(::java::lang::ObjectArray* array);
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* o);
    ListIterator* listIterator();
    bool remove(::java::lang::Object* element);
    ::java::lang::ObjectArray* array;

private:
    virtual ::java::lang::Class* getClass0();
    friend class Arrays;
    friend class Arrays_sort_1;
};
