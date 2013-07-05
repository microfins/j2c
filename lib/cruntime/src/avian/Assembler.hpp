// Generated from /runtime/avian/Assembler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace avian
{
typedef ::SubArray< ::avian::Assembler_MethodData, ::java::lang::ObjectArray > Assembler_MethodDataArray;
} // avian

struct default_init_tag;

class avian::Assembler
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ACC_PUBLIC { int32_t(1) };
    static constexpr int32_t ACC_STATIC { int32_t(8) };
    static constexpr int32_t aaload { int32_t(50) };
    static constexpr int32_t aastore { int32_t(83) };
    static constexpr int32_t aload { int32_t(25) };
    static constexpr int32_t aload_0 { int32_t(42) };
    static constexpr int32_t aload_1 { int32_t(43) };
    static constexpr int32_t astore_0 { int32_t(75) };
    static constexpr int32_t anewarray { int32_t(189) };
    static constexpr int32_t areturn { int32_t(176) };
    static constexpr int32_t dload { int32_t(24) };
    static constexpr int32_t dreturn { int32_t(175) };
    static constexpr int32_t dup { int32_t(89) };
    static constexpr int32_t fload { int32_t(23) };
    static constexpr int32_t freturn { int32_t(174) };
    static constexpr int32_t getfield { int32_t(180) };
    static constexpr int32_t goto_ { int32_t(167) };
    static constexpr int32_t iload { int32_t(21) };
    static constexpr int32_t invokeinterface { int32_t(185) };
    static constexpr int32_t invokespecial { int32_t(183) };
    static constexpr int32_t invokestatic { int32_t(184) };
    static constexpr int32_t invokevirtual { int32_t(182) };
    static constexpr int32_t ireturn { int32_t(172) };
    static constexpr int32_t jsr { int32_t(168) };
    static constexpr int32_t ldc_w { int32_t(19) };
    static constexpr int32_t lload { int32_t(22) };
    static constexpr int32_t lreturn { int32_t(173) };
    static constexpr int32_t new_ { int32_t(187) };
    static constexpr int32_t pop { int32_t(87) };
    static constexpr int32_t putfield { int32_t(181) };
    static constexpr int32_t ret { int32_t(169) };
    static constexpr int32_t return_ { int32_t(177) };
    static void writeClass(::java::io::OutputStream* out, ::java::util::List* pool, int32_t name, int32_t super_, ::int32_tArray* interfaces, Assembler_MethodDataArray* methods) /* throws(IOException) */;

    // Generated
    Assembler();
protected:
    Assembler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Assembler_MethodData;
};
