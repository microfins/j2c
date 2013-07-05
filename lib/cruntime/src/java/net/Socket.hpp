// Generated from /runtime/java/net/Socket.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::Socket
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void init_() /* throws(IOException) */;
    virtual void setTcpNoDelay(bool on) /* throws(SocketException) */ = 0;

    // Generated
    Socket();
protected:
    Socket(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
