// Generated from /runtime/java/lang/StringBuilder.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::StringBuilder_Cell
    : public virtual Object
{

public:
    typedef Object super;
    String* value {  };
    StringBuilder_Cell* next {  };
protected:
    void ctor(String* value, StringBuilder_Cell* next);

    // Generated

public:
    StringBuilder_Cell(String* value, StringBuilder_Cell* next);
protected:
    StringBuilder_Cell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class StringBuilder;
};
