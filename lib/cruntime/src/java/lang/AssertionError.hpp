// Generated from /runtime/java/lang/AssertionError.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::AssertionError
    : public Error
{

public:
    typedef Error super;
protected:
    void ctor();
    void ctor(bool detailMessage);
    void ctor(char16_t detailMessage);
    void ctor(double detailMessage);
    void ctor(float detailMessage);
    void ctor(int32_t detailMessage);
    void ctor(int64_t detailMessage);
    void ctor(Object* detailMessage);

    // Generated

public:
    AssertionError();
    AssertionError(bool detailMessage);
    AssertionError(char16_t detailMessage);
    AssertionError(double detailMessage);
    AssertionError(float detailMessage);
    AssertionError(int32_t detailMessage);
    AssertionError(int64_t detailMessage);
    AssertionError(Object* detailMessage);
protected:
    AssertionError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
