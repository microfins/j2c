// Generated from /runtime/java/lang/Enum.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Enum
    : public virtual Object
    , public virtual Comparable
{

public:
    typedef Object super;

private:
    String* name_ {  };

public: /* protected */
    int32_t ordinal_ {  };
protected:
    void ctor(String* name, int32_t ordinal);

public:
    virtual int32_t compareTo(Enum* other);
    static /* <T extends Enum<T>> */Enum* valueOf(Class* enumType, String* name);
    virtual int32_t ordinal();
    String* name();
    String* toString() override;
    virtual Class* getDeclaringClass();

    // Generated
    Enum(String* name, int32_t ordinal);
protected:
    Enum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
