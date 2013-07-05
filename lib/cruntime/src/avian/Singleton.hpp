// Generated from /runtime/avian/Singleton.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Singleton
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static int32_t getInt(::java::lang::Object* singleton, int32_t offset);
    static int64_t getLong(::java::lang::Object* singleton, int32_t offset);
    static ::java::lang::Object* getObject(::java::lang::Object* singleton, int32_t offset);

    // Generated
    Singleton();
protected:
    Singleton(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
