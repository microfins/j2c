// Generated from /runtime/java/io/FileDescriptor.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::FileDescriptor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static FileDescriptor* in_;
    static FileDescriptor* out_;
    static FileDescriptor* err_;

public: /* package */
    int32_t value {  };
protected:
    void ctor(int32_t value);
    void ctor();

    // Generated

public:
    FileDescriptor(int32_t value);
    FileDescriptor();
protected:
    FileDescriptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static FileDescriptor*& in();
    static FileDescriptor*& out();
    static FileDescriptor*& err();

private:
    virtual ::java::lang::Class* getClass0();
};
