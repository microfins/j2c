// Generated from /runtime/java/io/PrintStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::PrintStream_Static
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::int8_tArray* newline_;

    // Generated

public:
    PrintStream_Static();
protected:
    PrintStream_Static(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int8_tArray*& newline();
    virtual ::java::lang::Class* getClass0();
    friend class PrintStream;
};
