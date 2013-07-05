// Generated from /runtime/java/util/jar/Attributes.java
#include <java/util/jar/Attributes_Name.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::jar::Attributes_Name::Attributes_Name(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::Attributes_Name::Attributes_Name(::java::lang::String* s) 
    : Attributes_Name(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int32_t java::util::jar::Attributes_Name::MAX_NAME_LENGTH;

void java::util::jar::Attributes_Name::ctor(::java::lang::String* s)
{
    super::ctor();
    auto len = npc(s)->length();
    if(len == 0 || len > MAX_NAME_LENGTH)
        throw new ::java::lang::IllegalArgumentException();

    name = s;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::Attributes_Name::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.Attributes.Name", 29);
    return c;
}

java::lang::Class* java::util::jar::Attributes_Name::getClass0()
{
    return class_();
}

