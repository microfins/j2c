// Generated from /runtime/java/lang/Runtime.java
#include <java/lang/Runtime_MyProcess.hpp>

#include <java/io/FileDescriptor.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/lang/IllegalThreadStateException.hpp>
#include <java/lang/Runtime.hpp>

java::lang::Runtime_MyProcess::Runtime_MyProcess(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Runtime_MyProcess::Runtime_MyProcess(int64_t pid, int64_t tid, int32_t in, int32_t out, int32_t err) 
    : Runtime_MyProcess(*static_cast< ::default_init_tag* >(0))
{
    ctor(pid,tid,in,out,err);
}

void java::lang::Runtime_MyProcess::ctor(int64_t pid, int64_t tid, int32_t in, int32_t out, int32_t err)
{
    super::ctor();
    this->pid = pid;
    this->tid = tid;
    this->in = in;
    this->out = out;
    this->err = err;
}

void java::lang::Runtime_MyProcess::destroy()
{
    if(pid != 0) {
        Runtime::kill(pid);
    }
}

java::io::InputStream* java::lang::Runtime_MyProcess::getInputStream()
{
    return new ::java::io::FileInputStream(new ::java::io::FileDescriptor(in));
}

java::io::OutputStream* java::lang::Runtime_MyProcess::getOutputStream()
{
    return new ::java::io::FileOutputStream(new ::java::io::FileDescriptor(out));
}

java::io::InputStream* java::lang::Runtime_MyProcess::getErrorStream()
{
    return new ::java::io::FileInputStream(new ::java::io::FileDescriptor(err));
}

int32_t java::lang::Runtime_MyProcess::exitValue()
{
    if(pid != 0) {
        throw new IllegalThreadStateException();
    }
    return exitCode;
}

int32_t java::lang::Runtime_MyProcess::waitFor() /* throws(InterruptedException) */
{
    while (pid != 0) {
        wait();
    }
    return exitCode;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Runtime_MyProcess::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Runtime.MyProcess", 27);
    return c;
}

java::lang::Class* java::lang::Runtime_MyProcess::getClass0()
{
    return class_();
}

