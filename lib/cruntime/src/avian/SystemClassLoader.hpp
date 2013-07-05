// Generated from /runtime/avian/SystemClassLoader.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/ClassLoader.hpp>

struct default_init_tag;

class avian::SystemClassLoader
    : public ::java::lang::ClassLoader
{

public:
    typedef ::java::lang::ClassLoader super;

private:
    VMClass* findVMClass(::java::lang::String* name) /* throws(ClassNotFoundException) */;

public: /* protected */
    ::java::lang::Class* findClass(::java::lang::String* name) /* throws(ClassNotFoundException) */ override;

public:
    static ::java::lang::Class* getClass(VMClass* vmClass);
    static VMClass* vmClass(::java::lang::Class* jClass);

private:
    VMClass* findLoadedVMClass(::java::lang::String* name);

public: /* protected */
    ::java::lang::Class* reallyFindLoadedClass(::java::lang::String* name) override;
    ::java::lang::Class* loadClass(::java::lang::String* name, bool resolve) /* throws(ClassNotFoundException) */ override;

private:
    ::java::lang::String* resourceURLPrefix(::java::lang::String* name);

public: /* protected */
    ::java::net::URL* findResource(::java::lang::String* name) override;

public:
    ::java::net::URL* getResource(::java::lang::String* path) override;
    ::java::util::Enumeration* getResources(::java::lang::String* name) /* throws(IOException) */ override;

public: /* protected */
    ::java::util::Enumeration* findResources(::java::lang::String* name) override;

    // Generated

public:
    SystemClassLoader();
protected:
    SystemClassLoader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Class* loadClass(::java::lang::String* name);
    ::java::lang::Class* getClass();

private:
    virtual ::java::lang::Class* getClass0();
};
