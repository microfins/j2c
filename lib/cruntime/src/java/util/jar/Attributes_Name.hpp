// Generated from /runtime/java/util/jar/Attributes.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::jar::Attributes_Name
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* name {  };
    static constexpr int32_t MAX_NAME_LENGTH { int32_t(70) };
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    Attributes_Name(::java::lang::String* s);
protected:
    Attributes_Name(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Attributes;
};
