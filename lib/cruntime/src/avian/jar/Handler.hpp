// Generated from /runtime/avian/jar/Handler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/jar/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/net/URLStreamHandler.hpp>

struct default_init_tag;

class avian::jar::Handler
    : public ::java::net::URLStreamHandler
{

public:
    typedef ::java::net::URLStreamHandler super;

public: /* protected */
    ::java::net::URLConnection* openConnection(::java::net::URL* url) override;
    void parseURL(::java::net::URL* url, ::java::lang::String* s, int32_t start, int32_t end) /* throws(MalformedURLException) */ override;

    // Generated

public:
    Handler();
protected:
    Handler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Handler_MyJarURLConnection;
};
