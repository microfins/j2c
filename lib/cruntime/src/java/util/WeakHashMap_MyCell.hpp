// Generated from /runtime/java/util/WeakHashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/ref/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/ref/WeakReference.hpp>
#include <java/util/HashMap_Cell.hpp>

struct default_init_tag;

class java::util::WeakHashMap_MyCell
    : public ::java::lang::ref::WeakReference
    , public virtual HashMap_Cell
{

public:
    typedef ::java::lang::ref::WeakReference super;
    ::java::lang::Object* value {  };
    HashMap_Cell* next_ {  };
    int32_t hashCode_ {  };
protected:
    void ctor(::java::lang::Object* key, ::java::lang::ref::ReferenceQueue* queue, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode);

public:
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    HashMap_Cell* next() override;
    void setNext(HashMap_Cell* next) override;
    int32_t hashCode() override;

    // Generated
    WeakHashMap_MyCell(::java::lang::Object* key, ::java::lang::ref::ReferenceQueue* queue, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode);
protected:
    WeakHashMap_MyCell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class WeakHashMap;
    friend class WeakHashMap_MyHelper;
};
