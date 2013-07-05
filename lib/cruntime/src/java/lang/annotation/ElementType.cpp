// Generated from /runtime/java/lang/annotation/ElementType.java
#include <java/lang/annotation/ElementType.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::ElementType, ::java::lang::EnumArray > ElementTypeArray;
        } // annotation
    } // lang
} // java

java::lang::annotation::ElementType::ElementType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::annotation::ElementType::ElementType(::java::lang::String* name, int ordinal)
    : ElementType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

java::lang::annotation::ElementType* java::lang::annotation::ElementType::ANNOTATION_TYPE = new ::java::lang::annotation::ElementType(u"ANNOTATION_TYPE"_j, 0);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::CONSTRUCTOR = new ::java::lang::annotation::ElementType(u"CONSTRUCTOR"_j, 1);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::FIELD = new ::java::lang::annotation::ElementType(u"FIELD"_j, 2);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::LOCAL_VARIABLE = new ::java::lang::annotation::ElementType(u"LOCAL_VARIABLE"_j, 3);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::METHOD = new ::java::lang::annotation::ElementType(u"METHOD"_j, 4);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::PACKAGE = new ::java::lang::annotation::ElementType(u"PACKAGE"_j, 5);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::PARAMETER = new ::java::lang::annotation::ElementType(u"PARAMETER"_j, 6);
java::lang::annotation::ElementType* java::lang::annotation::ElementType::TYPE = new ::java::lang::annotation::ElementType(u"TYPE"_j, 7);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::annotation::ElementType::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.annotation.ElementType", 32);
    return c;
}

java::lang::annotation::ElementType* java::lang::annotation::ElementType::valueOf(::java::lang::String* a0)
{
    if(ANNOTATION_TYPE->toString()->equals(a0))
        return ANNOTATION_TYPE;
    if(CONSTRUCTOR->toString()->equals(a0))
        return CONSTRUCTOR;
    if(FIELD->toString()->equals(a0))
        return FIELD;
    if(LOCAL_VARIABLE->toString()->equals(a0))
        return LOCAL_VARIABLE;
    if(METHOD->toString()->equals(a0))
        return METHOD;
    if(PACKAGE->toString()->equals(a0))
        return PACKAGE;
    if(PARAMETER->toString()->equals(a0))
        return PARAMETER;
    if(TYPE->toString()->equals(a0))
        return TYPE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

java::lang::annotation::ElementTypeArray* java::lang::annotation::ElementType::values()
{
    return new java::lang::annotation::ElementTypeArray({
        ANNOTATION_TYPE,
        CONSTRUCTOR,
        FIELD,
        LOCAL_VARIABLE,
        METHOD,
        PACKAGE,
        PARAMETER,
        TYPE,
    });
}

java::lang::Class* java::lang::annotation::ElementType::getClass0()
{
    return class_();
}

