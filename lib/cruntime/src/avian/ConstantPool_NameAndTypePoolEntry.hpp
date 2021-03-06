// Generated from /runtime/avian/ConstantPool.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <avian/ConstantPool_PoolEntry.hpp>

struct default_init_tag;

class avian::ConstantPool_NameAndTypePoolEntry
    : public virtual ::java::lang::Object
    , public virtual ConstantPool_PoolEntry
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t nameIndex {  };
    int32_t typeIndex {  };
protected:
    void ctor(int32_t nameIndex, int32_t typeIndex);

public:
    void writeTo(::java::io::OutputStream* out) /* throws(IOException) */ override;
    bool equals(::java::lang::Object* o) override;

    // Generated
    ConstantPool_NameAndTypePoolEntry(int32_t nameIndex, int32_t typeIndex);
protected:
    ConstantPool_NameAndTypePoolEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConstantPool;
    friend class ConstantPool_PoolEntry;
    friend class ConstantPool_IntegerPoolEntry;
    friend class ConstantPool_Utf8PoolEntry;
    friend class ConstantPool_StringPoolEntry;
    friend class ConstantPool_ClassPoolEntry;
    friend class ConstantPool_FieldRefPoolEntry;
    friend class ConstantPool_MethodRefPoolEntry;
};
