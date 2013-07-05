// Generated from /runtime/java/net/URLStreamHandler.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::URLStreamHandler
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    virtual void parseURL(URL* url, ::java::lang::String* s, int32_t start, int32_t end) /* throws(MalformedURLException) */;

private:
    static bool equals(::java::lang::String* a, ::java::lang::String* b);

public: /* protected */
    virtual bool equals(URL* a, URL* b);
    virtual ::java::lang::String* toExternalForm(URL* url);
    virtual URLConnection* openConnection(URL* url) /* throws(IOException) */ = 0;

    // Generated

public:
    URLStreamHandler();
protected:
    URLStreamHandler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);

private:
    virtual ::java::lang::Class* getClass0();
};
