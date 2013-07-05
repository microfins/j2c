// Generated from /runtime/java/lang/Boolean.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Boolean final
    : public virtual Object
    , public Comparable
{

public:
    typedef Object super;

private:
    static Class* TYPE_;
    static Boolean* FALSE_;
    static Boolean* TRUE_;
    bool value {  };
protected:
    void ctor(bool value);
    void ctor(String* s);

public:
    static Boolean* valueOf(bool value);
    static Boolean* valueOf(String* s);
    int32_t compareTo(Boolean* o);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(bool v);
    bool booleanValue();

    // Generated
    Boolean(bool value);
    Boolean(String* s);
protected:
    Boolean(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();
    static Boolean*& FALSE();
    static Boolean*& TRUE();

private:
    virtual ::java::lang::Class* getClass0();
};
