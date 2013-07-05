// Generated from /runtime/java/net/JarURLConnection.java

#pragma once

#include <java/net/fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/net/URLConnection.hpp>

struct default_init_tag;

class java::net::JarURLConnection
    : public URLConnection
{

public:
    typedef URLConnection super;
protected:
    void ctor(URL* url);

public:
    virtual ::java::util::jar::JarFile* getJarFile() /* throws(IOException) */ = 0;

    // Generated
    JarURLConnection(URL* url);
protected:
    JarURLConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
