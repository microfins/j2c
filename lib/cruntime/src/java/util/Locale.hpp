// Generated from /runtime/java/util/Locale.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Locale
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static Locale* DEFAULT_;
    static Locale* ENGLISH_;
    ::java::lang::String* language {  };
    ::java::lang::String* country {  };
    ::java::lang::String* variant {  };
protected:
    void ctor(::java::lang::String* language, ::java::lang::String* country, ::java::lang::String* variant);
    void ctor(::java::lang::String* language, ::java::lang::String* country);
    void ctor(::java::lang::String* language);

public:
    virtual ::java::lang::String* getLanguage();
    virtual ::java::lang::String* getCountry();
    virtual ::java::lang::String* getVariant();
    static Locale* getDefault();
    ::java::lang::String* toString() override;

    // Generated
    Locale(::java::lang::String* language, ::java::lang::String* country, ::java::lang::String* variant);
    Locale(::java::lang::String* language, ::java::lang::String* country);
    Locale(::java::lang::String* language);
protected:
    Locale(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static Locale*& DEFAULT();

public:
    static Locale*& ENGLISH();

private:
    virtual ::java::lang::Class* getClass0();
};
