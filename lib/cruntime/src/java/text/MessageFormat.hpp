// Generated from /runtime/java/text/MessageFormat.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/text/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class java::text::MessageFormat
    : public Format
{

public:
    typedef Format super;

private:
    ::java::lang::String* pattern {  };
    ::java::util::Locale* locale {  };
protected:
    void ctor(::java::lang::String* pattern, ::java::util::Locale* locale);
    void ctor(::java::lang::String* pattern);

public:
    virtual ::java::lang::StringBuffer* format(::java::lang::ObjectArray* args, ::java::lang::StringBuffer* target, FieldPosition* p);
    ::java::lang::StringBuffer* format(::java::lang::Object* args, ::java::lang::StringBuffer* target, FieldPosition* p) override;
    static ::java::lang::String* format(::java::lang::String* pattern, ::java::lang::ObjectArray*/*...*/ args);
    virtual void applyPattern(::java::lang::String* pattern);

    // Generated
    MessageFormat(::java::lang::String* pattern, ::java::util::Locale* locale);
    MessageFormat(::java::lang::String* pattern);
protected:
    MessageFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(::java::lang::Object* o);

private:
    virtual ::java::lang::Class* getClass0();
};
