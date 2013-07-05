// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_IntegerPoolEntry.hpp>

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

avian::ConstantPool_IntegerPoolEntry::ConstantPool_IntegerPoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_IntegerPoolEntry::ConstantPool_IntegerPoolEntry(int32_t value) 
    : ConstantPool_IntegerPoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void avian::ConstantPool_IntegerPoolEntry::ctor(int32_t value)
{
    super::ctor();
    this->value = value;
}

void avian::ConstantPool_IntegerPoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_Integer);
    Stream::write4(out, value);
}

bool avian::ConstantPool_IntegerPoolEntry::equals(::java::lang::Object* o)
{
    return dynamic_cast< ConstantPool_IntegerPoolEntry* >(o) != nullptr && npc((java_cast< ConstantPool_IntegerPoolEntry* >(o)))->value == value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_IntegerPoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.IntegerPoolEntry", 35);
    return c;
}

java::lang::Class* avian::ConstantPool_IntegerPoolEntry::getClass0()
{
    return class_();
}

