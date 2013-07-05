// Generated from /runtime/java/lang/ClassLoader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ClassLoader
    : public virtual Object
{

public:
    typedef Object super;

private:
    ClassLoader* parent {  };
protected:
    void ctor(ClassLoader* parent);
    void ctor();

public:
    static ClassLoader* getSystemClassLoader();

public: /* protected */
    virtual Class* defineClass(String* name, ::int8_tArray* b, int32_t offset, int32_t length);
    virtual Class* findClass(String* name) /* throws(ClassNotFoundException) */;
    virtual Class* reallyFindLoadedClass(String* name);
    Class* findLoadedClass(String* name);

public:
    virtual Class* loadClass(String* name) /* throws(ClassNotFoundException) */;

public: /* protected */
    virtual Class* loadClass(String* name, bool resolve) /* throws(ClassNotFoundException) */;
    virtual void resolveClass(Class* c);

public:
    ClassLoader* getParent();

public: /* protected */
    virtual ::java::net::URL* findResource(String* path);
    virtual ::java::util::Enumeration* findResources(String* name) /* throws(IOException) */;

public:
    virtual ::java::net::URL* getResource(String* path);
    virtual ::java::io::InputStream* getResourceAsStream(String* path);
    static ::java::net::URL* getSystemResource(String* path);
    static ::java::io::InputStream* getSystemResourceAsStream(String* path);
    static ::java::util::Enumeration* getSystemResources(String* name) /* throws(IOException) */;
    virtual ::java::util::Enumeration* getResources(String* name) /* throws(IOException) */;

private:
    ::java::util::Collection* collectResources(String* name);

    // Generated

public: /* protected */
    ClassLoader(ClassLoader* parent);
    ClassLoader();
protected:
    ClassLoader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
