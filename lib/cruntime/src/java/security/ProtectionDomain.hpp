// Generated from /runtime/java/security/ProtectionDomain.java

#pragma once

#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::ProtectionDomain
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    CodeSource* codeSource {  };
    PermissionCollection* permissions {  };
protected:
    void ctor(CodeSource* codeSource, PermissionCollection* permissions);

public:
    virtual CodeSource* getCodeSource();

    // Generated
    ProtectionDomain(CodeSource* codeSource, PermissionCollection* permissions);
protected:
    ProtectionDomain(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
