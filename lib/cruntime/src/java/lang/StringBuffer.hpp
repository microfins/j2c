// Generated from /runtime/java/lang/StringBuffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/CharSequence.hpp>

struct default_init_tag;

class java::lang::StringBuffer
    : public virtual Object
    , public virtual CharSequence
{

public:
    typedef Object super;

private:
    StringBuilder* sb {  };
protected:
    void ctor(String* s);
    void ctor(int32_t capacity);
    void ctor();

public:
    virtual StringBuffer* append(String* s);
    virtual StringBuffer* append(CharSequence* s);
    virtual StringBuffer* append(StringBuffer* s);
    virtual StringBuffer* append(Object* o);
    virtual StringBuffer* append(char16_t v);
    virtual StringBuffer* append(bool v);
    virtual StringBuffer* append(int32_t v);
    virtual StringBuffer* append(int64_t v);
    virtual StringBuffer* append(float v);
    virtual StringBuffer* append(double v);
    virtual StringBuffer* append(::char16_tArray* b, int32_t offset, int32_t length);
    virtual StringBuffer* append(::char16_tArray* b);
    virtual int32_t indexOf(String* s);
    virtual int32_t indexOf(String* s, int32_t fromIndex);
    virtual StringBuffer* insert(int32_t i, String* s);
    virtual StringBuffer* insert(int32_t i, char16_t c);
    virtual StringBuffer* insert(int32_t i, int32_t v);
    virtual StringBuffer* delete_(int32_t start, int32_t end);
    virtual StringBuffer* deleteCharAt(int32_t i);
    char16_t charAt(int32_t i) override;
    int32_t length() override;
    virtual StringBuffer* replace(int32_t start, int32_t end, String* str);
    virtual void setLength(int32_t v);
    virtual void setCharAt(int32_t index, char16_t ch);
    virtual void getChars(int32_t srcStart, int32_t srcEnd, ::char16_tArray* dst, int32_t dstStart);
    String* toString() override;
    virtual String* substring(int32_t start, int32_t end);
    CharSequence* subSequence(int32_t start, int32_t end) override;

    // Generated
    StringBuffer(String* s);
    StringBuffer(int32_t capacity);
    StringBuffer();
protected:
    StringBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
