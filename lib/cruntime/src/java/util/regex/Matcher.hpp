// Generated from /runtime/java/util/regex/Matcher.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/regex/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::regex::Matcher
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Pattern* pattern {  };
    ::java::lang::CharSequence* input {  };
    int32_t start_ {  };
    int32_t end_ {  };
protected:
    void ctor(Pattern* pattern, ::java::lang::CharSequence* input);

public:
    virtual bool matches();
    virtual Matcher* reset();
    virtual Matcher* reset(::java::lang::CharSequence* input);
    virtual int32_t start();
    virtual ::java::lang::String* replaceAll(::java::lang::String* replacement);
    virtual ::java::lang::String* replaceFirst(::java::lang::String* replacement);

private:
    ::java::lang::String* replace(::java::lang::String* replacement, int32_t limit);

public:
    virtual int32_t end();
    virtual bool find();
    virtual bool find(int32_t start);

    // Generated

public: /* package */
    Matcher(Pattern* pattern, ::java::lang::CharSequence* input);
protected:
    Matcher(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
