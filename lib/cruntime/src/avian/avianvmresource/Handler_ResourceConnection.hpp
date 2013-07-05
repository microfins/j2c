// Generated from /runtime/avian/avianvmresource/Handler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/avianvmresource/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/net/URLConnection.hpp>

struct default_init_tag;

class avian::avianvmresource::Handler_ResourceConnection
    : public ::java::net::URLConnection
{

public:
    typedef ::java::net::URLConnection super;
protected:
    void ctor(::java::net::URL* url);

public:
    int32_t getContentLength() override;
    ::java::io::InputStream* getInputStream() /* throws(IOException) */ override;
    void connect() override;

    // Generated
    Handler_ResourceConnection(::java::net::URL* url);
protected:
    Handler_ResourceConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Handler;
    friend class Handler_ResourceInputStream;
};
