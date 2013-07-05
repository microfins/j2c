// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_Utf8PoolEntry.hpp>

#include <avian/ConstantPool.hpp>
#include <avian/Stream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

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

avian::ConstantPool_Utf8PoolEntry::ConstantPool_Utf8PoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_Utf8PoolEntry::ConstantPool_Utf8PoolEntry(::java::lang::String* data) 
    : ConstantPool_Utf8PoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

void avian::ConstantPool_Utf8PoolEntry::ctor(::java::lang::String* data)
{
    super::ctor();
    this->data = data;
}

void avian::ConstantPool_Utf8PoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_Utf8);
    auto bytes = npc(data)->getBytes();
    Stream::write2(out, npc(bytes)->length);
    npc(out)->write(bytes);
}

bool avian::ConstantPool_Utf8PoolEntry::equals(::java::lang::Object* o)
{
    return dynamic_cast< ConstantPool_Utf8PoolEntry* >(o) != nullptr && npc(npc((java_cast< ConstantPool_Utf8PoolEntry* >(o)))->data)->equals(static_cast< ::java::lang::Object* >(data));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_Utf8PoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.Utf8PoolEntry", 32);
    return c;
}

java::lang::Class* avian::ConstantPool_Utf8PoolEntry::getClass0()
{
    return class_();
}

