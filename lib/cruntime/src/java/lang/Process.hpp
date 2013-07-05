// Generated from /runtime/java/lang/Process.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Process
    : public virtual Object
{

public:
    typedef Object super;
    virtual void destroy() = 0;
    virtual int32_t exitValue() = 0;
    virtual ::java::io::InputStream* getInputStream() = 0;
    virtual ::java::io::OutputStream* getOutputStream() = 0;
    virtual ::java::io::InputStream* getErrorStream() = 0;
    virtual int32_t waitFor() /* throws(InterruptedException) */ = 0;

    // Generated
    Process();
protected:
    Process(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
