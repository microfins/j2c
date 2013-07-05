// Generated from /runtime/java/text/MessageFormat.java
#include <java/text/MessageFormat.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/util/Locale.hpp>
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

java::text::MessageFormat::MessageFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::MessageFormat::MessageFormat(::java::lang::String* pattern, ::java::util::Locale* locale) 
    : MessageFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,locale);
}

java::text::MessageFormat::MessageFormat(::java::lang::String* pattern) 
    : MessageFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

void java::text::MessageFormat::ctor(::java::lang::String* pattern, ::java::util::Locale* locale)
{
    super::ctor();
    this->pattern = pattern;
    this->locale = locale;
}

void java::text::MessageFormat::ctor(::java::lang::String* pattern)
{
    ctor(pattern, ::java::util::Locale::getDefault());
}

java::lang::StringBuffer* java::text::MessageFormat::format(::java::lang::ObjectArray* args, ::java::lang::StringBuffer* target, FieldPosition* p)
{
    auto result = pattern;
    auto length = npc(args)->length;
    for (auto i = int32_t(0); i < length; i++) {
        result = npc(result)->replace(static_cast< ::java::lang::CharSequence* >(::java::lang::StringBuilder().append(u"{"_j)->append(i)
            ->append(u"}"_j)->toString()), static_cast< ::java::lang::CharSequence* >(::java::lang::String::valueOf((*args)[i])));
    }
    return npc(target)->append(result);
}

java::lang::StringBuffer* java::text::MessageFormat::format(::java::lang::Object* args, ::java::lang::StringBuffer* target, FieldPosition* p)
{
    return format(java_cast< ::java::lang::ObjectArray* >(args), target, p);
}

java::lang::String* java::text::MessageFormat::format(::java::lang::String* pattern, ::java::lang::ObjectArray*/*...*/ args)
{
    clinit();
    return npc((new MessageFormat(pattern))->format(args, new ::java::lang::StringBuffer(), new FieldPosition(int32_t(0))))->toString();
}

void java::text::MessageFormat::applyPattern(::java::lang::String* pattern)
{
    this->pattern = pattern;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::MessageFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.MessageFormat", 23);
    return c;
}

java::lang::String* java::text::MessageFormat::format(::java::lang::Object* o)
{
    return super::format(o);
}

java::lang::Class* java::text::MessageFormat::getClass0()
{
    return class_();
}

