// Generated from /runtime/sun/misc/Unsafe.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <sun/misc/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::misc::Unsafe final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    void Unsafe_();
    static Unsafe* Instance_;

public:
    static Unsafe* getUnsafe();
    int64_t allocateMemory(int64_t bytes);
    void setMemory(::java::lang::Object* base, int64_t offset, int64_t count, int8_t value);
    void freeMemory(int64_t address);
    int8_t getByte(int64_t address);
    void putByte(int64_t address, int8_t x);
    int16_t getShort(int64_t address);
    void putShort(int64_t address, int16_t x);
    char16_t getChar(int64_t address);
    void putChar(int64_t address, char16_t x);
    int32_t getInt(int64_t address);
    void putInt(int64_t address, int32_t x);
    int64_t getLong(int64_t address);
    void putLong(int64_t address, int64_t x);
    float getFloat(int64_t address);
    void putFloat(int64_t address, float x);
    double getDouble(int64_t address);
    void putDouble(int64_t address, double x);
    void putIntVolatile(::java::lang::Object* o, int64_t offset, int32_t x);
    void putOrderedInt(::java::lang::Object* o, int64_t offset, int32_t x);
    ::java::lang::Object* getObject(::java::lang::Object* o, int64_t offset);
    void putObject(::java::lang::Object* o, int64_t offset, ::java::lang::Object* x);
    int64_t getAddress(int64_t address);
    void putAddress(int64_t address, int64_t x);
    int32_t arrayBaseOffset(::java::lang::Class* arrayClass);
    int64_t objectFieldOffset(::java::lang::reflect::Field* field);
    void park(bool absolute, int64_t time);
    void unpark(::java::lang::Object* target);
    void copyMemory(::java::lang::Object* srcBase, int64_t srcOffset, ::java::lang::Object* destBase, int64_t destOffset, int64_t count);
    bool compareAndSwapInt(::java::lang::Object* o, int64_t offset, int32_t old, int32_t new_);
    bool compareAndSwapObject(::java::lang::Object* o, int64_t offset, ::java::lang::Object* old, ::java::lang::Object* new_);
    void copyMemory(int64_t src, int64_t dst, int64_t count);

    // Generated
    Unsafe();
protected:
    Unsafe(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static Unsafe*& Instance();
    virtual ::java::lang::Class* getClass0();
};
