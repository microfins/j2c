// Generated from /runtime/java/util/zip/ZipEntry.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::zip::ZipEntry
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual ::java::lang::String* getName() = 0;
    virtual int32_t getCompressedSize() = 0;
    virtual int32_t getSize() = 0;
    virtual bool isDirectory();

    // Generated
    ZipEntry();
protected:
    ZipEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
