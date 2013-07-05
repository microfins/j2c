// Generated from /runtime/avian/OpenJDK.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::OpenJDK
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::security::ProtectionDomain* getProtectionDomain(VMClass* c);

private:
    static ::int8_tArray* replace(int32_t a, int32_t b, ::int8_tArray* s, int32_t offset, int32_t length);

    // Generated

public:
    OpenJDK();
protected:
    OpenJDK(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
