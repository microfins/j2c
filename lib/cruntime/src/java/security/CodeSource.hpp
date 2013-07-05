// Generated from /runtime/java/security/CodeSource.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/security/cert/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace security
    {
        namespace cert
        {
typedef ::SubArray< ::java::security::cert::Certificate, ::java::lang::ObjectArray > CertificateArray;
        } // cert
    } // security
} // java

struct default_init_tag;

class java::security::CodeSource
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::net::URL* url {  };
protected:
    void ctor(::java::net::URL* url, ::java::security::cert::CertificateArray* certificates);

public:
    virtual ::java::net::URL* getLocation();

    // Generated
    CodeSource(::java::net::URL* url, ::java::security::cert::CertificateArray* certificates);
protected:
    CodeSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
