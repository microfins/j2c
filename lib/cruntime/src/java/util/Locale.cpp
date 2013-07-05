// Generated from /runtime/java/util/Locale.java
#include <java/util/Locale.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>

java::util::Locale::Locale(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Locale::Locale(::java::lang::String* language, ::java::lang::String* country, ::java::lang::String* variant) 
    : Locale(*static_cast< ::default_init_tag* >(0))
{
    ctor(language,country,variant);
}

java::util::Locale::Locale(::java::lang::String* language, ::java::lang::String* country) 
    : Locale(*static_cast< ::default_init_tag* >(0))
{
    ctor(language,country);
}

java::util::Locale::Locale(::java::lang::String* language) 
    : Locale(*static_cast< ::default_init_tag* >(0))
{
    ctor(language);
}

java::util::Locale*& java::util::Locale::DEFAULT()
{
    clinit();
    return DEFAULT_;
}
java::util::Locale* java::util::Locale::DEFAULT_;

java::util::Locale*& java::util::Locale::ENGLISH()
{
    clinit();
    return ENGLISH_;
}
java::util::Locale* java::util::Locale::ENGLISH_;

void java::util::Locale::ctor(::java::lang::String* language, ::java::lang::String* country, ::java::lang::String* variant)
{
    super::ctor();
    this->language = language;
    this->country = country;
    this->variant = variant;
}

void java::util::Locale::ctor(::java::lang::String* language, ::java::lang::String* country)
{
    ctor(language, country, u""_j);
}

void java::util::Locale::ctor(::java::lang::String* language)
{
    ctor(language, u""_j);
}

java::lang::String* java::util::Locale::getLanguage()
{
    return language;
}

java::lang::String* java::util::Locale::getCountry()
{
    return country;
}

java::lang::String* java::util::Locale::getVariant()
{
    return variant;
}

java::util::Locale* java::util::Locale::getDefault()
{
    clinit();
    return DEFAULT_;
}

java::lang::String* java::util::Locale::toString()
{
    auto hasLanguage = language != u""_j;
    auto hasCountry = country != u""_j;
    auto hasVariant = variant != u""_j;
    if(!hasLanguage && !hasCountry)
        return u""_j;

    return ::java::lang::StringBuilder().append(language)->append((hasCountry || hasVariant ? ::java::lang::StringBuilder().append(u'_')->append(country)->toString() : u""_j))
        ->append((hasVariant ? ::java::lang::StringBuilder().append(u'_')->append(variant)->toString() : u""_j))->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Locale::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Locale", 16);
    return c;
}

void java::util::Locale::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ENGLISH_ = new Locale(u"en"_j, u""_j);
        {
            DEFAULT_ = new Locale(::java::lang::System::getProperty(u"user.language"_j), ::java::lang::System::getProperty(u"user.region"_j));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::Locale::getClass0()
{
    return class_();
}

