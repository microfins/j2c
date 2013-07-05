// Generated from /runtime/java/net/StandardProtocolFamily.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Enum.hpp>
#include <java/net/ProtocolFamily.hpp>

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

struct default_init_tag;

class java::net::StandardProtocolFamily final
    : public ::java::lang::Enum
    , public ProtocolFamily
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static StandardProtocolFamily *INET;

    // Generated

public:
    StandardProtocolFamily(::java::lang::String* name, int ordinal);
protected:
    StandardProtocolFamily(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static StandardProtocolFamily* valueOf(::java::lang::String* a0);
    static StandardProtocolFamilyArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
