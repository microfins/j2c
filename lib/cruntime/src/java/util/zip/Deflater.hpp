// Generated from /runtime/java/util/zip/Deflater.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::zip::Deflater
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t DEFAULT_LEVEL { int32_t(6) };
    static constexpr int32_t Z_OK { int32_t(0) };
    static constexpr int32_t Z_STREAM_END { int32_t(1) };
    static constexpr int32_t Z_NEED_DICT { int32_t(2) };
    int64_t peer {  };
    ::int8_tArray* input {  };
    int32_t offset {  };
    int32_t length {  };
    bool needDictionary {  };
    bool finished_ {  };
    bool nowrap {  };
    bool finish_ {  };
protected:
    void ctor(int32_t level, bool nowrap);
    void ctor(int32_t level);
    void ctor();

private:
    void check();
    static int64_t make(bool nowrap, int32_t level);

public:
    virtual bool finished();
    virtual bool needsDictionary();
    virtual bool needsInput();
    virtual int32_t getRemaining();
    virtual void setLevel(int32_t level) /* throws(IllegalArgumentException) */;
    virtual void setInput(::int8_tArray* input);
    virtual void setInput(::int8_tArray* input, int32_t offset, int32_t length);
    virtual void reset();
    virtual int32_t deflate(::int8_tArray* output);
    virtual int32_t deflate(::int8_tArray* output, int32_t offset, int32_t length);
    virtual void finish();

private:
    static void deflate(int64_t peer, ::int8_tArray* input, int32_t inputOffset, int32_t inputLength, ::int8_tArray* output, int32_t outputOffset, int32_t outputLength, bool finish, ::int32_tArray* results);

public:
    virtual void end();
    virtual void dispose();

private:
    static void dispose(int64_t peer);

    // Generated

public:
    Deflater(int32_t level, bool nowrap);
    Deflater(int32_t level);
    Deflater();
protected:
    Deflater(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
