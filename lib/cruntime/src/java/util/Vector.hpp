// Generated from /runtime/java/util/Vector.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractList.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Vector
    : public AbstractList
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    ArrayList* list {  };
protected:
    void ctor(int32_t capacity);
    void ctor();
    void ctor(Collection* source);

public:
    int32_t size() override;
    bool contains(::java::lang::Object* element) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    virtual void insertElementAt(::java::lang::Object* element, int32_t index);
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    virtual void addElement(::java::lang::Object* element);
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* value) override;
    virtual void setElementAt(::java::lang::Object* value, int32_t index);
    virtual ::java::lang::Object* elementAt(int32_t index);
    ::java::lang::Object* remove(int32_t index) override;
    bool isEmpty() override;
    virtual void removeElementAt(int32_t index);
    virtual void removeAllElements();
    bool remove(::java::lang::Object* element) override;
    virtual bool removeElement(::java::lang::Object* element);
    void clear() override;
    int32_t indexOf(::java::lang::Object* element) override;
    int32_t lastIndexOf(::java::lang::Object* element) override;
    virtual void copyInto(::java::lang::ObjectArray* array);
    Iterator* iterator() override;
    ListIterator* listIterator(int32_t index) override;
    ListIterator* listIterator() override;
    virtual Enumeration* elements();

    // Generated
    Vector(int32_t capacity);
    Vector();
    Vector(Collection* source);
protected:
    Vector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool addAll(int32_t startIndex, Collection* c);

private:
    virtual ::java::lang::Class* getClass0();
};
