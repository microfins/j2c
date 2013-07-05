// Generated from /runtime/java/lang/reflect/Array.java
#include <java/lang/reflect/Array_.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NegativeArraySizeException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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

java::lang::reflect::Array_::Array_(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Array_::Array_() 
    : Array_(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::reflect::Array_::ctor()
{
    super::ctor();
}

java::lang::Object* java::lang::reflect::Array_::get(::java::lang::Object* array, int32_t index)
{
    clinit();
    auto className = npc(npc(array)->getClass())->getName();
    if(!npc(className)->startsWith(u"["_j)) {
        throw new ::java::lang::IllegalArgumentException();
    }
    switch (npc(className)->charAt(int32_t(1))) {
    case u'B':
        return ::java::lang::Byte::valueOf((*(java_cast< ::int8_tArray* >(array)))[index]);
    case u'C':
        return ::java::lang::Character::valueOf((*(java_cast< ::char16_tArray* >(array)))[index]);
    case u'D':
        return ::java::lang::Double::valueOf((*(java_cast< ::doubleArray* >(array)))[index]);
    case u'F':
        return ::java::lang::Float::valueOf((*(java_cast< ::floatArray* >(array)))[index]);
    case u'I':
        return ::java::lang::Integer::valueOf((*(java_cast< ::int32_tArray* >(array)))[index]);
    case u'J':
        return ::java::lang::Long::valueOf((*(java_cast< ::int64_tArray* >(array)))[index]);
    case u'S':
        return ::java::lang::Short::valueOf((*(java_cast< ::int16_tArray* >(array)))[index]);
    case u'Z':
        return ::java::lang::Boolean::valueOf((*(java_cast< ::boolArray* >(array)))[index]);
    case u'L':
    case u'[':
        return (*(java_cast< ::java::lang::ObjectArray* >(array)))[index];
    default:
        throw new ::java::lang::Error();
    }

}

void java::lang::reflect::Array_::set(::java::lang::Object* array, int32_t index, ::java::lang::Object* value)
{
    clinit();
    auto className = npc(npc(array)->getClass())->getName();
    if(!npc(className)->startsWith(u"["_j)) {
        throw new ::java::lang::IllegalArgumentException();
    }
    switch (npc(className)->charAt(int32_t(1))) {
    case u'B':
        (*(java_cast< ::int8_tArray* >(array)))[index] = (npc(java_cast< ::java::lang::Byte* >(value)))->byteValue();
        break;
    case u'C':
        (*(java_cast< ::char16_tArray* >(array)))[index] = (npc(java_cast< ::java::lang::Character* >(value)))->charValue();
        break;
    case u'D':
        (*(java_cast< ::doubleArray* >(array)))[index] = (npc(java_cast< ::java::lang::Double* >(value)))->doubleValue();
        break;
    case u'F':
        (*(java_cast< ::floatArray* >(array)))[index] = (npc(java_cast< ::java::lang::Float* >(value)))->floatValue();
        break;
    case u'I':
        (*(java_cast< ::int32_tArray* >(array)))[index] = (npc(java_cast< ::java::lang::Integer* >(value)))->intValue();
        break;
    case u'J':
        (*(java_cast< ::int64_tArray* >(array)))[index] = (npc(java_cast< ::java::lang::Long* >(value)))->longValue();
        break;
    case u'S':
        (*(java_cast< ::int16_tArray* >(array)))[index] = (npc(java_cast< ::java::lang::Short* >(value)))->shortValue();
        break;
    case u'Z':
        (*(java_cast< ::boolArray* >(array)))[index] = (npc(java_cast< ::java::lang::Boolean* >(value)))->booleanValue();
        break;
    case u'L':
    case u'[':
        if(value == nullptr || npc(npc(npc(array)->getClass())->getComponentType())->isInstance(value)) {
            (java_cast< ::java::lang::ObjectArray* >(array))->set(index, value);
        } else {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"need "_j)->append(static_cast< ::java::lang::Object* >(npc(npc(array)->getClass())->getComponentType()))
                ->append(u", got "_j)
                ->append(npc(npc(value)->getClass())->getName())->toString());
        }
        break;
    default:
        throw new ::java::lang::Error();
    }

}

java::lang::Object* java::lang::reflect::Array_::newInstance(::java::lang::Class* elementType, int32_t length)
{
    clinit();
    if(length < 0) {
        throw new ::java::lang::NegativeArraySizeException();
    }
    if(npc(elementType)->isPrimitive()) {
        if(npc(elementType)->equals(::java::lang::Boolean::TYPE())) {
            return new ::boolArray(length);
        } else if(npc(elementType)->equals(::java::lang::Byte::TYPE())) {
            return new ::int8_tArray(length);
        } else if(npc(elementType)->equals(::java::lang::Character::TYPE())) {
            return new ::char16_tArray(length);
        } else if(npc(elementType)->equals(::java::lang::Short::TYPE())) {
            return new ::int16_tArray(length);
        } else if(npc(elementType)->equals(::java::lang::Integer::TYPE())) {
            return new ::int32_tArray(length);
        } else if(npc(elementType)->equals(::java::lang::Long::TYPE())) {
            return new ::int64_tArray(length);
        } else if(npc(elementType)->equals(::java::lang::Float::TYPE())) {
            return new ::floatArray(length);
        } else if(npc(elementType)->equals(::java::lang::Double::TYPE())) {
            return new ::doubleArray(length);
        } else {
            throw new ::java::lang::IllegalArgumentException();
        }
    } else {
        return makeObjectArray_(elementType, length);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Array_::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Array", 23);
    return c;
}

java::lang::Class* java::lang::reflect::Array_::getClass0()
{
    return class_();
}

