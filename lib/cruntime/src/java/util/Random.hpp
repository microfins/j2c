// Generated from /runtime/java/util/Random.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Random
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t Mask { int64_t(25214903917LL) };
    static constexpr int64_t InitialSeed { int64_t(123456789987654321LL) };
    static int64_t nextSeed_;
    int64_t seed {  };
protected:
    void ctor(int64_t seed);
    void ctor();

public:
    virtual void setSeed(int64_t seed);

public: /* protected */
    virtual int32_t next(int32_t bits);

public:
    virtual int32_t nextInt(int32_t limit);
    virtual int32_t nextInt();
    virtual void nextBytes(::int8_tArray* bytes);
    virtual int64_t nextLong();
    virtual double nextDouble();

    // Generated
    Random(int64_t seed);
    Random();
protected:
    Random(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int64_t& nextSeed();
    virtual ::java::lang::Class* getClass0();
};
