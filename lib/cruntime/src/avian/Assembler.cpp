// Generated from /runtime/avian/Assembler.java
#include <avian/Assembler.hpp>

#include <avian/Assembler_MethodData.hpp>
#include <avian/ConstantPool_PoolEntry.hpp>
#include <avian/ConstantPool.hpp>
#include <avian/Stream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace avian
{
typedef ::SubArray< ::avian::Assembler_MethodData, ::java::lang::ObjectArray > Assembler_MethodDataArray;
} // avian

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::Assembler::Assembler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Assembler::Assembler()
    : Assembler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t avian::Assembler::ACC_PUBLIC;

constexpr int32_t avian::Assembler::ACC_STATIC;

constexpr int32_t avian::Assembler::aaload;

constexpr int32_t avian::Assembler::aastore;

constexpr int32_t avian::Assembler::aload;

constexpr int32_t avian::Assembler::aload_0;

constexpr int32_t avian::Assembler::aload_1;

constexpr int32_t avian::Assembler::astore_0;

constexpr int32_t avian::Assembler::anewarray;

constexpr int32_t avian::Assembler::areturn;

constexpr int32_t avian::Assembler::dload;

constexpr int32_t avian::Assembler::dreturn;

constexpr int32_t avian::Assembler::dup;

constexpr int32_t avian::Assembler::fload;

constexpr int32_t avian::Assembler::freturn;

constexpr int32_t avian::Assembler::getfield;

constexpr int32_t avian::Assembler::goto_;

constexpr int32_t avian::Assembler::iload;

constexpr int32_t avian::Assembler::invokeinterface;

constexpr int32_t avian::Assembler::invokespecial;

constexpr int32_t avian::Assembler::invokestatic;

constexpr int32_t avian::Assembler::invokevirtual;

constexpr int32_t avian::Assembler::ireturn;

constexpr int32_t avian::Assembler::jsr;

constexpr int32_t avian::Assembler::ldc_w;

constexpr int32_t avian::Assembler::lload;

constexpr int32_t avian::Assembler::lreturn;

constexpr int32_t avian::Assembler::new_;

constexpr int32_t avian::Assembler::pop;

constexpr int32_t avian::Assembler::putfield;

constexpr int32_t avian::Assembler::ret;

constexpr int32_t avian::Assembler::return_;

void avian::Assembler::writeClass(::java::io::OutputStream* out, ::java::util::List* pool, int32_t name, int32_t super_, ::int32_tArray* interfaces, Assembler_MethodDataArray* methods) /* throws(IOException) */
{
    clinit();
    auto codeAttributeName = ConstantPool::addUtf8(pool, u"Code"_j);
    Stream::write4(out, -889275714);
    Stream::write2(out, 0);
    Stream::write2(out, 0);
    Stream::write2(out, npc(pool)->size() + int32_t(1));
    for (auto _i = npc(pool)->iterator(); _i->hasNext(); ) {
        ConstantPool_PoolEntry* e = java_cast< ConstantPool_PoolEntry* >(_i->next());
        {
            npc(e)->writeTo(out);
        }
    }
    Stream::write2(out, ACC_PUBLIC);
    Stream::write2(out, name + int32_t(1));
    Stream::write2(out, super_ + int32_t(1));
    Stream::write2(out, npc(interfaces)->length);
    for(auto i : *npc(interfaces)) {
        Stream::write2(out, i + int32_t(1));
    }
    Stream::write2(out, 0);
    Stream::write2(out, npc(methods)->length);
    for(auto m : *npc(methods)) {
        Stream::write2(out, npc(m)->flags);
        Stream::write2(out, npc(m)->nameIndex + int32_t(1));
        Stream::write2(out, npc(m)->specIndex + int32_t(1));
        Stream::write2(out, 1);
        Stream::write2(out, codeAttributeName + int32_t(1));
        Stream::write4(out, npc(npc(m)->code)->length);
        npc(out)->write(npc(m)->code);
    }
    Stream::write2(out, 0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Assembler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Assembler", 15);
    return c;
}

java::lang::Class* avian::Assembler::getClass0()
{
    return class_();
}

