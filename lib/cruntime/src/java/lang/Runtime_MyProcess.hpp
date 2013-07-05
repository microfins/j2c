// Generated from /runtime/java/lang/Runtime.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Process.hpp>

struct default_init_tag;

class java::lang::Runtime_MyProcess
    : public Process
{

public:
    typedef Process super;

private:
    int64_t pid {  };
    int64_t tid {  };
    int32_t in {  };
    int32_t out {  };
    int32_t err {  };
    int32_t exitCode {  };
protected:
    void ctor(int64_t pid, int64_t tid, int32_t in, int32_t out, int32_t err);

public:
    void destroy() override;
    ::java::io::InputStream* getInputStream() override;
    ::java::io::OutputStream* getOutputStream() override;
    ::java::io::InputStream* getErrorStream() override;
    int32_t exitValue() override;
    int32_t waitFor() /* throws(InterruptedException) */ override;

    // Generated
    Runtime_MyProcess(int64_t pid, int64_t tid, int32_t in, int32_t out, int32_t err);
protected:
    Runtime_MyProcess(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Runtime;
    friend class Runtime_exec_1;
};
