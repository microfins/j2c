// Generated from /runtime/avian/OpenJDK.java
#include <avian/OpenJDK.hpp>

#include <avian/VMClass.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/security/AllPermission.hpp>
#include <java/security/CodeSource.hpp>
#include <java/security/Permission.hpp>
#include <java/security/Permissions.hpp>
#include <java/security/ProtectionDomain.hpp>
#include <java/security/cert/Certificate.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace security
    {
        namespace cert
        {
typedef ::SubArray< ::java::security::cert::Certificate, ::java::lang::ObjectArray > CertificateArray;
        } // cert
    } // security
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::OpenJDK::OpenJDK(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::OpenJDK::OpenJDK()
    : OpenJDK(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::security::ProtectionDomain* avian::OpenJDK::getProtectionDomain(VMClass* c)
{
    clinit();
    ::java::security::CodeSource* source = nullptr;
    if(npc(c)->source != nullptr) {
        try {
            source = new ::java::security::CodeSource(new ::java::net::URL(new ::java::lang::String(npc(c)->source, int32_t(0), npc(npc(c)->source)->length - int32_t(1))), static_cast< ::java::security::cert::CertificateArray* >(nullptr));
        } catch (::java::net::MalformedURLException* ignored) {
        }
    }
    auto p = new ::java::security::Permissions();
    npc(p)->add(static_cast< ::java::security::Permission* >(new ::java::security::AllPermission()));
    return new ::java::security::ProtectionDomain(source, p);
}

int8_tArray* avian::OpenJDK::replace(int32_t a, int32_t b, ::int8_tArray* s, int32_t offset, int32_t length)
{
    clinit();
    auto array = new ::int8_tArray(length);
    for (auto i = int32_t(0); i < length; ++i) {
        auto c = (*s)[i];
        (*array)[i] = static_cast< int8_t >((c == a ? b : static_cast< int32_t >(c)));
    }
    return array;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::OpenJDK::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.OpenJDK", 13);
    return c;
}

java::lang::Class* avian::OpenJDK::getClass0()
{
    return class_();
}

