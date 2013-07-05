// Generated from /runtime/java/lang/Void.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Void final
    : public Object
{

public:
    typedef Object super;

private:
    static Class* TYPE_;
protected:
    void ctor();

    // Generated

private:
    Void();
protected:
    Void(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
