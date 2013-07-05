// Generated from /runtime/java/lang/Package.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Package
    : public virtual Object
{

public:
    typedef Object super;

private:
    String* name {  };
    String* implementationTitle {  };
    String* implementationVendor {  };
    String* implementationVersion {  };
    String* specificationTitle {  };
    String* specificationVendor {  };
    String* specificationVersion {  };
    ::java::net::URL* sealed {  };
    ClassLoader* loader {  };
protected:
    void ctor(String* name, String* implementationTitle, String* implementationVendor, String* implementationVersion, String* specificationTitle, String* specificationVendor, String* specificationVersion, ::java::net::URL* sealed, ClassLoader* loader);

public:
    virtual String* getName();
    virtual String* getImplementationTitle();
    virtual String* getImplementationVendor();
    virtual String* getImplementationVersion();
    virtual String* getSpecificationTitle();
    virtual String* getSpecificationVendor();
    virtual String* getSpecificationVersion();
    virtual bool isSealed();
    virtual bool isSealed(::java::net::URL* url);

    // Generated

public: /* package */
    Package(String* name, String* implementationTitle, String* implementationVendor, String* implementationVersion, String* specificationTitle, String* specificationVendor, String* specificationVersion, ::java::net::URL* sealed, ClassLoader* loader);
protected:
    Package(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
