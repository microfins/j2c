// Generated from /runtime/java/lang/reflect/Field.java
#include <java/lang/reflect/Field.hpp>

#include <avian/AnnotationInvocationHandler.hpp>
#include <avian/Classes.hpp>
#include <avian/FieldAddendum.hpp>
#include <avian/SystemClassLoader.hpp>
#include <avian/VMClass.hpp>
#include <avian/VMField.hpp>
#include <java/lang/ArrayStoreException.hpp>
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
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Proxy.hpp>
#include <java/lang/reflect/Type.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::lang::reflect::AnnotatedElementArray, ::java::lang::reflect::TypeArray > ClassArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
        } // reflect
    } // lang
} // java

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

java::lang::reflect::Field::Field(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Field::Field(::avian::VMField* vmField) 
    : Field(*static_cast< ::default_init_tag* >(0))
{
    ctor(vmField);
}

void java::lang::reflect::Field::init()
{
    accessible = true;
}

constexpr int32_t java::lang::reflect::Field::VoidField;

constexpr int32_t java::lang::reflect::Field::ByteField;

constexpr int32_t java::lang::reflect::Field::CharField;

constexpr int32_t java::lang::reflect::Field::DoubleField;

constexpr int32_t java::lang::reflect::Field::FloatField;

constexpr int32_t java::lang::reflect::Field::IntField;

constexpr int32_t java::lang::reflect::Field::LongField;

constexpr int32_t java::lang::reflect::Field::ShortField;

constexpr int32_t java::lang::reflect::Field::BooleanField;

constexpr int32_t java::lang::reflect::Field::ObjectField;

void java::lang::reflect::Field::ctor(::avian::VMField* vmField)
{
    super::ctor();
    init();
    this->vmField = vmField;
}

bool java::lang::reflect::Field::isAccessible()
{
    return accessible;
}

void java::lang::reflect::Field::setAccessible(bool v)
{
    accessible = v;
}

java::lang::Class* java::lang::reflect::Field::getDeclaringClass()
{
    return ::avian::SystemClassLoader::getClass(npc(vmField)->class__);
}

int32_t java::lang::reflect::Field::getModifiers()
{
    return npc(vmField)->flags;
}

java::lang::String* java::lang::reflect::Field::getName()
{
    return getName(vmField);
}

java::lang::String* java::lang::reflect::Field::getName(::avian::VMField* vmField)
{
    clinit();
    return new ::java::lang::String(npc(vmField)->name, int32_t(0), npc(npc(vmField)->name)->length - int32_t(1), false);
}

java::lang::Class* java::lang::reflect::Field::getType()
{
    return ::avian::Classes::forCanonicalName(npc(npc(vmField)->class__)->loader, new ::java::lang::String(npc(vmField)->spec, int32_t(0), npc(npc(vmField)->spec)->length - int32_t(1), false));
}

java::lang::Object* java::lang::reflect::Field::get(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    ::java::lang::Object* target;
    if((npc(vmField)->flags & Modifier::STATIC) != 0) {
        target = npc(npc(vmField)->class__)->staticTable;
    } else if(::java::lang::Class::isInstance(npc(vmField)->class__, instance)) {
        target = instance;
    } else {
        throw new ::java::lang::IllegalArgumentException();
    }
    switch (npc(vmField)->code) {
    case ByteField:
        return ::java::lang::Byte::valueOf(static_cast< int8_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset)));
    case BooleanField:
        return ::java::lang::Boolean::valueOf(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset) != 0);
    case CharField:
        return ::java::lang::Character::valueOf(static_cast< char16_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset)));
    case ShortField:
        return ::java::lang::Short::valueOf(static_cast< int16_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset)));
    case IntField:
        return ::java::lang::Integer::valueOf(static_cast< int32_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset)));
    case LongField:
        return ::java::lang::Long::valueOf(static_cast< int64_t >(static_cast< int32_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset))));
    case FloatField:
        return ::java::lang::Float::valueOf(::java::lang::Float::intBitsToFloat(static_cast< int32_t >(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset))));
    case DoubleField:
        return ::java::lang::Double::valueOf(::java::lang::Double::longBitsToDouble(getPrimitive(target, npc(vmField)->code, npc(vmField)->offset)));
    case ObjectField:
        return getObject(target, npc(vmField)->offset);
    default:
        throw new ::java::lang::Error();
    }

}

bool java::lang::reflect::Field::getBoolean(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Boolean* >(get(instance))))->booleanValue();
}

int8_t java::lang::reflect::Field::getByte(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Byte* >(get(instance))))->byteValue();
}

int16_t java::lang::reflect::Field::getShort(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Short* >(get(instance))))->shortValue();
}

char16_t java::lang::reflect::Field::getChar(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Character* >(get(instance))))->charValue();
}

int32_t java::lang::reflect::Field::getInt(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Integer* >(get(instance))))->intValue();
}

float java::lang::reflect::Field::getFloat(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Float* >(get(instance))))->floatValue();
}

int64_t java::lang::reflect::Field::getLong(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Long* >(get(instance))))->longValue();
}

double java::lang::reflect::Field::getDouble(::java::lang::Object* instance) /* throws(IllegalAccessException) */
{
    return npc((java_cast< ::java::lang::Double* >(get(instance))))->doubleValue();
}

void java::lang::reflect::Field::set(::java::lang::Object* instance, ::java::lang::Object* value) /* throws(IllegalAccessException) */
{
    ::java::lang::Object* target;
    if((npc(vmField)->flags & Modifier::STATIC) != 0) {
        target = npc(npc(vmField)->class__)->staticTable;
    } else if(::java::lang::Class::isInstance(npc(vmField)->class__, instance)) {
        target = instance;
    } else {
        throw new ::java::lang::IllegalArgumentException();
    }
    switch (npc(vmField)->code) {
    case ByteField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc(java_cast< ::java::lang::Byte* >(value)))->byteValue());
        break;
    case BooleanField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc((java_cast< ::java::lang::Boolean* >(value))))->booleanValue() ? int32_t(1) : int32_t(0));
        break;
    case CharField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc(java_cast< ::java::lang::Character* >(value)))->charValue());
        break;
    case ShortField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc(java_cast< ::java::lang::Short* >(value)))->shortValue());
        break;
    case IntField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc(java_cast< ::java::lang::Integer* >(value)))->intValue());
        break;
    case LongField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, (npc(java_cast< ::java::lang::Long* >(value)))->longValue());
        break;
    case FloatField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, ::java::lang::Float::floatToRawIntBits((npc(java_cast< ::java::lang::Float* >(value)))->floatValue()));
        break;
    case DoubleField:
        setPrimitive(target, npc(vmField)->code, npc(vmField)->offset, ::java::lang::Double::doubleToRawLongBits((npc(java_cast< ::java::lang::Double* >(value)))->doubleValue()));
        break;
    case ObjectField:
        if(value == nullptr || npc(getType())->isInstance(value)) {
            setObject(target, npc(vmField)->offset, value);
        } else {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"needed "_j)->append(static_cast< ::java::lang::Object* >(getType()))
                ->append(u", got "_j)
                ->append(npc(npc(value)->getClass())->getName())
                ->append(u" when setting "_j)
                ->append(::java::lang::Class::getName(npc(vmField)->class__))
                ->append(u"."_j)
                ->append(getName())->toString());
        }
        break;
    default:
        throw new ::java::lang::Error();
    }

}

java::lang::annotation::Annotation* java::lang::reflect::Field::getAnnotation(::java::lang::ObjectArray* a)
{
    if((*a)[int32_t(0)] == nullptr) {
        a->set(int32_t(0), Proxy::newProxyInstance(npc(npc(vmField)->class__)->loader, new ::java::lang::ClassArray({java_cast< ::java::lang::Class* >((*a)[int32_t(1)])}), new ::avian::AnnotationInvocationHandler(a)));
    }
    return java_cast< ::java::lang::annotation::Annotation* >((*a)[int32_t(0)]);
}

/* <T extends Annotation> */java::lang::annotation::Annotation* java::lang::reflect::Field::getAnnotation(::java::lang::Class* class__)
{
    if(npc(npc(vmField)->addendum)->annotationTable != nullptr) {
        auto table = java_cast< ::java::lang::ObjectArray* >(npc(npc(vmField)->addendum)->annotationTable);
        for (auto i = int32_t(0); i < npc(table)->length; ++i) {
            auto a = java_cast< ::java::lang::ObjectArray* >((*table)[i]);
            if((*a)[int32_t(1)] == static_cast< ::java::lang::Object* >(class__)) {
                return java_cast< ::java::lang::annotation::Annotation* >(getAnnotation(a));
            }
        }
    }
    return nullptr;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Field::getAnnotations()
{
    if(npc(npc(vmField)->addendum)->annotationTable != nullptr) {
        auto table = java_cast< ::java::lang::ObjectArray* >(npc(npc(vmField)->addendum)->annotationTable);
        auto array = new ::java::lang::annotation::AnnotationArray(npc(table)->length);
        for (auto i = int32_t(0); i < npc(table)->length; ++i) {
            array->set(i, getAnnotation(java_cast< ::java::lang::ObjectArray* >((*table)[i])));
        }
        return array;
    } else {
        return new ::java::lang::annotation::AnnotationArray(int32_t(0));
    }
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Field::getDeclaredAnnotations()
{
    return getAnnotations();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Field::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Field", 23);
    return c;
}

void java::lang::reflect::Field::setAccessible(AccessibleObjectArray* array, bool v)
{
    super::setAccessible(array, v);
}

java::lang::Class* java::lang::reflect::Field::getClass0()
{
    return class_();
}

