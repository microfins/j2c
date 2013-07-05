// Generated from /runtime/java/util/StringTokenizer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>

struct default_init_tag;

class java::util::StringTokenizer
    : public virtual ::java::lang::Object
    , public virtual Enumeration
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* in {  };
    ::java::lang::String* delimiters {  };
    bool includeDelimiters {  };
    int32_t position {  };
protected:
    void ctor(::java::lang::String* in, ::java::lang::String* delimiters, bool includeDelimiters);
    void ctor(::java::lang::String* in, ::java::lang::String* delimiters);
    void ctor(::java::lang::String* in);

private:
    bool isDelimiter(char16_t c);

public:
    virtual int32_t countTokens();
    virtual bool hasMoreTokens();
    virtual ::java::lang::String* nextToken();
    virtual ::java::lang::String* nextToken(::java::lang::String* delimiters);
    bool hasMoreElements() override;
    ::java::lang::Object* nextElement() override;

    // Generated
    StringTokenizer(::java::lang::String* in, ::java::lang::String* delimiters, bool includeDelimiters);
    StringTokenizer(::java::lang::String* in, ::java::lang::String* delimiters);
    StringTokenizer(::java::lang::String* in);
protected:
    StringTokenizer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
