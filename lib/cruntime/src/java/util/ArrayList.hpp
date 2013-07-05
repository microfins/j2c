// Generated from /runtime/java/util/ArrayList.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractList.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::ArrayList
    : public AbstractList
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    static constexpr int32_t MinimumCapacity { int32_t(16) };
    ::java::lang::ObjectArray* array {  };
    int32_t size_ {  };
protected:
    void ctor(int32_t capacity);
    void ctor();
    void ctor(Collection* source);

private:
    void grow(int32_t newSize);
    void shrink(int32_t newSize);
    void resize(int32_t capacity);
    static bool equal(::java::lang::Object* a, ::java::lang::Object* b);

public:
    int32_t size() override;
    bool contains(::java::lang::Object* element) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    int32_t indexOf(::java::lang::Object* element) override;
    int32_t lastIndexOf(::java::lang::Object* element) override;
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;
    ::java::lang::Object* remove(int32_t index) override;
    bool remove(::java::lang::Object* element) override;
    bool isEmpty() override;
    void clear() override;
    Iterator* iterator() override;
    ListIterator* listIterator(int32_t index) override;
    ListIterator* listIterator() override;
    ::java::lang::String* toString() override;

    // Generated
    ArrayList(int32_t capacity);
    ArrayList();
    ArrayList(Collection* source);
protected:
    ArrayList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool addAll(int32_t startIndex, Collection* c);

private:
    virtual ::java::lang::Class* getClass0();
};
