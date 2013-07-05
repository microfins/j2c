// Generated from /runtime/java/net/URLConnection.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::URLConnection
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    URL* url {  };
    bool doInput {  };
    bool doOutput {  };
    bool useCaches {  };
protected:
    void ctor(URL* url);

public:
    virtual ::java::lang::Object* getContent() /* throws(IOException) */;
    virtual int32_t getContentLength();
    virtual void connect() /* throws(IOException) */ = 0;
    virtual ::java::io::InputStream* getInputStream() /* throws(IOException) */;
    virtual ::java::io::OutputStream* getOutputStream() /* throws(IOException) */;
    virtual bool getDoInput();
    virtual bool getDoOutput();
    virtual void setDoInput(bool v);
    virtual void setDoOutput(bool v);
    virtual void setUseCaches(bool v);

    // Generated

public: /* protected */
    URLConnection(URL* url);
protected:
    URLConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
