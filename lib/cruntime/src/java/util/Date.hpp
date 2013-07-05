// Generated from /runtime/java/util/Date.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Date
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int64_t when {  };
protected:
    void ctor();
    void ctor(int64_t when);

public:
    virtual int64_t getTime();
    ::java::lang::String* toString() override;

private:
    static ::java::lang::String* toString(int64_t when);

    // Generated

public:
    Date();
    Date(int64_t when);
protected:
    Date(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
