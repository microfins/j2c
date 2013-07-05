// Generated from /runtime/java/lang/ref/Reference.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/ref/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ref::Reference
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Object* vmNext {  };
    ::java::lang::Object* target {  };
    ReferenceQueue* queue {  };

public: /* package */
    Reference* jNext {  };
protected:
    void ctor(::java::lang::Object* target, ReferenceQueue* queue);
    void ctor(::java::lang::Object* target);

public:
    virtual ::java::lang::Object* get();
    virtual void clear();
    virtual bool isEnqueued();
    virtual bool enqueue();

    // Generated

public: /* protected */
    Reference(::java::lang::Object* target, ReferenceQueue* queue);
    Reference(::java::lang::Object* target);
protected:
    Reference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
