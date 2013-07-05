// Generated from /runtime/java/net/URL.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::URL final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    URLStreamHandler* handler {  };
    ::java::lang::String* protocol {  };
    ::java::lang::String* host {  };
    int32_t port {  };
    ::java::lang::String* file {  };
    ::java::lang::String* path {  };
    ::java::lang::String* query {  };
    ::java::lang::String* ref {  };
protected:
    void ctor(::java::lang::String* s) /* throws(MalformedURLException) */;

public:
    ::java::lang::String* toString() override;
    ::java::lang::String* getProtocol();
    ::java::lang::String* getHost();
    int32_t getPort();
    ::java::lang::String* getFile();
    ::java::lang::String* getRef();
    ::java::lang::String* getPath();
    ::java::lang::String* getQuery();
    URLConnection* openConnection() /* throws(IOException) */;
    ::java::io::InputStream* openStream() /* throws(IOException) */;
    ::java::lang::Object* getContent() /* throws(IOException) */;

private:
    static URLStreamHandler* findHandler(::java::lang::String* protocol) /* throws(MalformedURLException) */;

public:
    void set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, ::java::lang::String* ref);

    // Generated
    URL(::java::lang::String* s);
protected:
    URL(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
