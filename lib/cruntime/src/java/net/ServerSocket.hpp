// Generated from /runtime/java/net/ServerSocket.java

#pragma once

#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::ServerSocket
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual void bind(SocketAddress* address) /* throws(IOException) */ = 0;

    // Generated
    ServerSocket();
protected:
    ServerSocket(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
