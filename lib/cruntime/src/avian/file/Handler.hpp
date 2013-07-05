// Generated from /runtime/avian/file/Handler.java

#pragma once

#include <avian/file/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/net/URLStreamHandler.hpp>

struct default_init_tag;

class avian::file::Handler
    : public ::java::net::URLStreamHandler
{

public:
    typedef ::java::net::URLStreamHandler super;

public: /* protected */
    ::java::net::URLConnection* openConnection(::java::net::URL* url) override;

    // Generated

public:
    Handler();
protected:
    Handler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Handler_FileURLConnection;
};
