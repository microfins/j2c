// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_StringPoolEntry.hpp>

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

avian::ConstantPool_StringPoolEntry::ConstantPool_StringPoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_StringPoolEntry::ConstantPool_StringPoolEntry(int32_t valueIndex) 
    : ConstantPool_StringPoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueIndex);
}

void avian::ConstantPool_StringPoolEntry::ctor(int32_t valueIndex)
{
    super::ctor();
    this->valueIndex = valueIndex;
}

void avian::ConstantPool_StringPoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_String);
    Stream::write2(out, valueIndex + int32_t(1));
}

bool avian::ConstantPool_StringPoolEntry::equals(::java::lang::Object* o)
{
    return dynamic_cast< ConstantPool_StringPoolEntry* >(o) != nullptr && npc((java_cast< ConstantPool_StringPoolEntry* >(o)))->valueIndex == valueIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_StringPoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.StringPoolEntry", 34);
    return c;
}

java::lang::Class* avian::ConstantPool_StringPoolEntry::getClass0()
{
    return class_();
}

