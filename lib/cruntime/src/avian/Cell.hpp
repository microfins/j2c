// Generated from /runtime/avian/Cell.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Cell
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* value {  };
    Cell* next {  };
protected:
    void ctor(::java::lang::Object* value, Cell* next);

public:
    ::java::lang::String* toString() override;

    // Generated
    Cell(::java::lang::Object* value, Cell* next);
protected:
    Cell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
