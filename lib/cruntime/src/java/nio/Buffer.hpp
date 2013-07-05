// Generated from /runtime/java/nio/Buffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::Buffer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    int32_t capacity_ {  };
    int32_t position_ {  };
    int32_t limit_ {  };

public:
    int32_t limit();
    int32_t remaining();
    int32_t position();
    int32_t capacity();
    Buffer* limit(int32_t newLimit);
    Buffer* position(int32_t newPosition);
    bool hasRemaining();
    Buffer* clear();
    Buffer* flip();
    Buffer* rewind();

    // Generated
    Buffer();
protected:
    Buffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
