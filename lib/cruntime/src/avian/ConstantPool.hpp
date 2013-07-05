// Generated from /runtime/avian/ConstantPool.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::ConstantPool
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t CONSTANT_Integer { int32_t(3) };
    static constexpr int32_t CONSTANT_Utf8 { int32_t(1) };
    static constexpr int32_t CONSTANT_String { int32_t(8) };
    static constexpr int32_t CONSTANT_Class { int32_t(7) };
    static constexpr int32_t CONSTANT_NameAndType { int32_t(12) };
    static constexpr int32_t CONSTANT_Fieldref { int32_t(9) };
    static constexpr int32_t CONSTANT_Methodref { int32_t(10) };

public:
    static int32_t add(::java::util::List* pool, ConstantPool_PoolEntry* e);
    static int32_t addInteger(::java::util::List* pool, int32_t value);
    static int32_t addUtf8(::java::util::List* pool, ::java::lang::String* value);
    static int32_t addString(::java::util::List* pool, ::java::lang::String* value);
    static int32_t addClass(::java::util::List* pool, ::java::lang::String* name);
    static int32_t addNameAndType(::java::util::List* pool, ::java::lang::String* name, ::java::lang::String* type);
    static int32_t addFieldRef(::java::util::List* pool, ::java::lang::String* className, ::java::lang::String* name, ::java::lang::String* spec);
    static int32_t addMethodRef(::java::util::List* pool, ::java::lang::String* className, ::java::lang::String* name, ::java::lang::String* spec);

    // Generated
    ConstantPool();
protected:
    ConstantPool(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConstantPool_PoolEntry;
    friend class ConstantPool_IntegerPoolEntry;
    friend class ConstantPool_Utf8PoolEntry;
    friend class ConstantPool_StringPoolEntry;
    friend class ConstantPool_ClassPoolEntry;
    friend class ConstantPool_NameAndTypePoolEntry;
    friend class ConstantPool_FieldRefPoolEntry;
    friend class ConstantPool_MethodRefPoolEntry;
};
