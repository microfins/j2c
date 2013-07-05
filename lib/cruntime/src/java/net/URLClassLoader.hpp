// Generated from /runtime/java/net/URLClassLoader.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/ClassLoader.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace net
    {
typedef ::SubArray< ::java::net::URL, ::java::lang::ObjectArray > URLArray;
    } // net
} // java

struct default_init_tag;

class java::net::URLClassLoader
    : public ::java::lang::ClassLoader
{

public:
    typedef ::java::lang::ClassLoader super;

private:
    ::java::io::File* jarFile {  };
protected:
    void ctor(URLArray* urls, ::java::lang::ClassLoader* parent);

public: /* protected */
    ::java::lang::Class* findClass(::java::lang::String* name) /* throws(ClassNotFoundException) */ override;

public:
    URL* getResource(::java::lang::String* path) override;

    // Generated
    URLClassLoader(URLArray* urls, ::java::lang::ClassLoader* parent);
protected:
    URLClassLoader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
