// Generated from /runtime/java/lang/StringBuilder.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Appendable.hpp>

struct default_init_tag;

class java::lang::StringBuilder
    : public virtual Object
    , public virtual CharSequence
    , public virtual Appendable
{

public:
    typedef Object super;

private:
    static constexpr int32_t BufferSize { int32_t(32) };
    StringBuilder_Cell* chain {  };
    int32_t length_ {  };
    ::char16_tArray* buffer {  };
    int32_t position {  };
protected:
    void ctor(String* s);
    void ctor(int32_t capacity);
    void ctor();

private:
    void flush();

public:
    virtual StringBuilder* append(String* s);
    virtual StringBuilder* append(StringBuffer* sb);
    StringBuilder* append(CharSequence* sequence) override;
    Appendable* append(CharSequence* sequence, int32_t start, int32_t end) override;
    virtual StringBuilder* append(::char16_tArray* b, int32_t offset, int32_t length);
    virtual StringBuilder* append(Object* o);
    StringBuilder* append(char16_t v) override;
    virtual StringBuilder* append(bool v);
    virtual StringBuilder* append(int32_t v);
    virtual StringBuilder* append(int64_t v);
    virtual StringBuilder* append(float v);
    virtual StringBuilder* append(double v);
    char16_t charAt(int32_t i) override;
    virtual StringBuilder* insert(int32_t i, String* s);
    virtual StringBuilder* insert(int32_t i, CharSequence* s);
    virtual StringBuilder* insert(int32_t i, char16_t c);
    virtual StringBuilder* insert(int32_t i, int32_t v);
    virtual StringBuilder* delete_(int32_t start, int32_t end);
    virtual StringBuilder* deleteCharAt(int32_t i);
    virtual StringBuilder* replace(int32_t start, int32_t end, String* str);
    virtual int32_t indexOf(String* s);
    virtual int32_t indexOf(String* s, int32_t start);
    virtual int32_t lastIndexOf(String* s);
    virtual int32_t lastIndexOf(String* s, int32_t lastIndex);
    int32_t length() override;
    virtual void setLength(int32_t v);
    virtual void getChars(int32_t srcStart, int32_t srcEnd, ::char16_tArray* dst, int32_t dstStart);
    String* toString() override;
    virtual String* substring(int32_t start);
    virtual String* substring(int32_t start, int32_t end);
    CharSequence* subSequence(int32_t start, int32_t end) override;
    virtual void setCharAt(int32_t index, char16_t ch);
    virtual void ensureCapacity(int32_t capacity);

    // Generated
    StringBuilder(String* s);
    StringBuilder(int32_t capacity);
    StringBuilder();
protected:
    StringBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class StringBuilder_Cell;
};
