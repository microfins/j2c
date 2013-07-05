// Generated from /runtime/java/util/AbstractQueue.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/Queue.hpp>

struct default_init_tag;

class java::util::AbstractQueue
    : public AbstractCollection
    , public virtual Queue
{

public:
    typedef AbstractCollection super;
protected:
    void ctor();

public:
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    void clear() override;
    ::java::lang::Object* element() override;
    ::java::lang::Object* remove() override;

private:
    void emptyCheck();

    // Generated

public: /* protected */
    AbstractQueue();
protected:
    AbstractQueue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool contains(::java::lang::Object* element);
    virtual bool containsAll(Collection* c);
    virtual bool isEmpty();
    virtual bool remove(::java::lang::Object* element);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);

private:
    virtual ::java::lang::Class* getClass0();
};
