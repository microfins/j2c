// Generated from /runtime/java/net/StandardProtocolFamily.java
#include <java/net/StandardProtocolFamily.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <java/net/ProtocolFamily.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
    } // lang

    namespace net
    {
typedef ::SubArray< ::java::net::ProtocolFamily, ::java::lang::ObjectArray > ProtocolFamilyArray;
typedef ::SubArray< ::java::net::StandardProtocolFamily, ::java::lang::EnumArray, ProtocolFamilyArray > StandardProtocolFamilyArray;
    } // net
} // java

java::net::StandardProtocolFamily::StandardProtocolFamily(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::StandardProtocolFamily::StandardProtocolFamily(::java::lang::String* name, int ordinal)
    : StandardProtocolFamily(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

java::net::StandardProtocolFamily* java::net::StandardProtocolFamily::INET = new ::java::net::StandardProtocolFamily(u"INET"_j, 0);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::StandardProtocolFamily::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.StandardProtocolFamily", 31);
    return c;
}

java::net::StandardProtocolFamily* java::net::StandardProtocolFamily::valueOf(::java::lang::String* a0)
{
    if(INET->toString()->equals(a0))
        return INET;
    throw new ::java::lang::IllegalArgumentException(a0);
}

java::net::StandardProtocolFamilyArray* java::net::StandardProtocolFamily::values()
{
    return new java::net::StandardProtocolFamilyArray({
        INET,
    });
}

java::lang::Class* java::net::StandardProtocolFamily::getClass0()
{
    return class_();
}

