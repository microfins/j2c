// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool.hpp>

#include <avian/ConstantPool_ClassPoolEntry.hpp>
#include <avian/ConstantPool_FieldRefPoolEntry.hpp>
#include <avian/ConstantPool_IntegerPoolEntry.hpp>
#include <avian/ConstantPool_MethodRefPoolEntry.hpp>
#include <avian/ConstantPool_NameAndTypePoolEntry.hpp>
#include <avian/ConstantPool_PoolEntry.hpp>
#include <avian/ConstantPool_StringPoolEntry.hpp>
#include <avian/ConstantPool_Utf8PoolEntry.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>

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

avian::ConstantPool::ConstantPool(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool::ConstantPool()
    : ConstantPool(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t avian::ConstantPool::CONSTANT_Integer;

constexpr int32_t avian::ConstantPool::CONSTANT_Utf8;

constexpr int32_t avian::ConstantPool::CONSTANT_String;

constexpr int32_t avian::ConstantPool::CONSTANT_Class;

constexpr int32_t avian::ConstantPool::CONSTANT_NameAndType;

constexpr int32_t avian::ConstantPool::CONSTANT_Fieldref;

constexpr int32_t avian::ConstantPool::CONSTANT_Methodref;

int32_t avian::ConstantPool::add(::java::util::List* pool, ConstantPool_PoolEntry* e)
{
    clinit();
    auto i = int32_t(0);
    for (auto _i = npc(pool)->iterator(); _i->hasNext(); ) {
        ConstantPool_PoolEntry* existing = java_cast< ConstantPool_PoolEntry* >(_i->next());
        {
            if(npc(existing)->equals(e)) {
                return i;
            } else {
                ++i;
            }
        }
    }
    npc(pool)->add(static_cast< ::java::lang::Object* >(e));
    return npc(pool)->size() - int32_t(1);
}

int32_t avian::ConstantPool::addInteger(::java::util::List* pool, int32_t value)
{
    clinit();
    return add(pool, new ConstantPool_IntegerPoolEntry(value));
}

int32_t avian::ConstantPool::addUtf8(::java::util::List* pool, ::java::lang::String* value)
{
    clinit();
    return add(pool, new ConstantPool_Utf8PoolEntry(value));
}

int32_t avian::ConstantPool::addString(::java::util::List* pool, ::java::lang::String* value)
{
    clinit();
    return add(pool, new ConstantPool_StringPoolEntry(addUtf8(pool, value)));
}

int32_t avian::ConstantPool::addClass(::java::util::List* pool, ::java::lang::String* name)
{
    clinit();
    return add(pool, new ConstantPool_ClassPoolEntry(addUtf8(pool, name)));
}

int32_t avian::ConstantPool::addNameAndType(::java::util::List* pool, ::java::lang::String* name, ::java::lang::String* type)
{
    clinit();
    return add(pool, new ConstantPool_NameAndTypePoolEntry(addUtf8(pool, name), addUtf8(pool, type)));
}

int32_t avian::ConstantPool::addFieldRef(::java::util::List* pool, ::java::lang::String* className, ::java::lang::String* name, ::java::lang::String* spec)
{
    clinit();
    return add(pool, new ConstantPool_FieldRefPoolEntry(addClass(pool, className), addNameAndType(pool, name, spec)));
}

int32_t avian::ConstantPool::addMethodRef(::java::util::List* pool, ::java::lang::String* className, ::java::lang::String* name, ::java::lang::String* spec)
{
    clinit();
    return add(pool, new ConstantPool_MethodRefPoolEntry(addClass(pool, className), addNameAndType(pool, name, spec)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool", 18);
    return c;
}

java::lang::Class* avian::ConstantPool::getClass0()
{
    return class_();
}

