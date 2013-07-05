// Generated from /runtime/java/io/File.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::File_Pair
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* value {  };
    File_Pair* next {  };
protected:
    void ctor(::java::lang::String* value, File_Pair* next);

    // Generated

public:
    File_Pair(::java::lang::String* value, File_Pair* next);
protected:
    File_Pair(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class File;
};
