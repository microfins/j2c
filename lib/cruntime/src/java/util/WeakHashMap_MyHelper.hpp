// Generated from /runtime/java/util/WeakHashMap.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/HashMap_MyHelper.hpp>

struct default_init_tag;

class java::util::WeakHashMap_MyHelper
    : public HashMap_MyHelper
{

public:
    typedef HashMap_MyHelper super;
    HashMap_Cell* make(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next) override;

    // Generated
    WeakHashMap_MyHelper(WeakHashMap *WeakHashMap_this);
protected:
    WeakHashMap_MyHelper(WeakHashMap *WeakHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    WeakHashMap *WeakHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class WeakHashMap;
    friend class WeakHashMap_MyCell;
};
