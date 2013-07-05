// Generated from /runtime/avian/jar/Handler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/jar/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/net/JarURLConnection.hpp>

struct default_init_tag;

class avian::jar::Handler_MyJarURLConnection
    : public ::java::net::JarURLConnection
{

public:
    typedef ::java::net::JarURLConnection super;

private:
    ::java::util::jar::JarFile* file {  };
    ::java::util::jar::JarEntry* entry {  };
protected:
    void ctor(::java::net::URL* url);

public:
    ::java::util::jar::JarFile* getJarFile() /* throws(IOException) */ override;
    int32_t getContentLength() override;
    ::java::io::InputStream* getInputStream() /* throws(IOException) */ override;
    void connect() override;

    // Generated
    Handler_MyJarURLConnection(::java::net::URL* url);
protected:
    Handler_MyJarURLConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Handler;
};
