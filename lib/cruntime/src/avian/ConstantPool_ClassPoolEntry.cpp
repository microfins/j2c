// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_ClassPoolEntry.hpp>

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

avian::ConstantPool_ClassPoolEntry::ConstantPool_ClassPoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_ClassPoolEntry::ConstantPool_ClassPoolEntry(int32_t nameIndex) 
    : ConstantPool_ClassPoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameIndex);
}

void avian::ConstantPool_ClassPoolEntry::ctor(int32_t nameIndex)
{
    super::ctor();
    this->nameIndex = nameIndex;
}

void avian::ConstantPool_ClassPoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_Class);
    Stream::write2(out, nameIndex + int32_t(1));
}

bool avian::ConstantPool_ClassPoolEntry::equals(::java::lang::Object* o)
{
    return dynamic_cast< ConstantPool_ClassPoolEntry* >(o) != nullptr && npc((java_cast< ConstantPool_ClassPoolEntry* >(o)))->nameIndex == nameIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_ClassPoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.ClassPoolEntry", 33);
    return c;
}

java::lang::Class* avian::ConstantPool_ClassPoolEntry::getClass0()
{
    return class_();
}

