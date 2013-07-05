// Generated from /runtime/java/util/logging/Level.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/logging/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::Level
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static Level* FINEST_;
    static Level* FINER_;
    static Level* FINE_;
    static Level* INFO_;
    static Level* WARNING_;
    static Level* SEVERE_;
    int32_t value {  };
    ::java::lang::String* name {  };
protected:
    void ctor(::java::lang::String* name, int32_t value);

public:
    virtual int32_t intValue();
    virtual ::java::lang::String* getName();
    ::java::lang::String* toString() override;

    // Generated

private:
    Level(::java::lang::String* name, int32_t value);
protected:
    Level(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Level*& FINEST();
    static Level*& FINER();
    static Level*& FINE();
    static Level*& INFO();
    static Level*& WARNING();
    static Level*& SEVERE();

private:
    virtual ::java::lang::Class* getClass0();
};
