// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_NameAndTypePoolEntry.hpp>

#include <avian/ConstantPool.hpp>
#include <avian/Stream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

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

avian::ConstantPool_NameAndTypePoolEntry::ConstantPool_NameAndTypePoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_NameAndTypePoolEntry::ConstantPool_NameAndTypePoolEntry(int32_t nameIndex, int32_t typeIndex) 
    : ConstantPool_NameAndTypePoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameIndex,typeIndex);
}

void avian::ConstantPool_NameAndTypePoolEntry::ctor(int32_t nameIndex, int32_t typeIndex)
{
    super::ctor();
    this->nameIndex = nameIndex;
    this->typeIndex = typeIndex;
}

void avian::ConstantPool_NameAndTypePoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_NameAndType);
    Stream::write2(out, nameIndex + int32_t(1));
    Stream::write2(out, typeIndex + int32_t(1));
}

bool avian::ConstantPool_NameAndTypePoolEntry::equals(::java::lang::Object* o)
{
    if(dynamic_cast< ConstantPool_NameAndTypePoolEntry* >(o) != nullptr) {
        auto other = java_cast< ConstantPool_NameAndTypePoolEntry* >(o);
        return npc(other)->nameIndex == nameIndex && npc(other)->typeIndex == typeIndex;
    } else {
        return false;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_NameAndTypePoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.NameAndTypePoolEntry", 39);
    return c;
}

java::lang::Class* avian::ConstantPool_NameAndTypePoolEntry::getClass0()
{
    return class_();
}

