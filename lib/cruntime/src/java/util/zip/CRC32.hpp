// Generated from /runtime/java/util/zip/CRC32.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::zip::CRC32
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t Polynomial { int32_t(79764919) };
    static constexpr int32_t Width { int32_t(32) };
    static constexpr int32_t Top { int32_t(-0x7fffffff-1) };
    static constexpr int32_t InitialRemainder { int32_t(-1) };
    static constexpr int64_t ResultXor { int64_t(4294967295LL) };
    static ::int32_tArray* table_;
    int32_t remainder {  };

public:
    virtual void reset();
    virtual void update(int32_t b);
    virtual void update(::int8_tArray* array, int32_t offset, int32_t length);
    virtual void update(::int8_tArray* array);
    virtual int64_t getValue();

private:
    static int32_t reflect(int32_t x, int32_t n);

    // Generated

public:
    CRC32();
protected:
    void ctor();
    CRC32(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::int32_tArray*& table();
    virtual ::java::lang::Class* getClass0();
};
