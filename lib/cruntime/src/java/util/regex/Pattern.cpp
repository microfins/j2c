// Generated from /runtime/java/util/regex/Pattern.java
#include <java/util/regex/Pattern.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <java/util/regex/Matcher.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
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

java::util::regex::Pattern::Pattern(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::regex::Pattern::Pattern(::java::lang::String* pattern, int32_t flags) 
    : Pattern(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,flags);
}

constexpr int32_t java::util::regex::Pattern::UNIX_LINES;

constexpr int32_t java::util::regex::Pattern::CASE_INSENSITIVE;

constexpr int32_t java::util::regex::Pattern::COMMENTS;

constexpr int32_t java::util::regex::Pattern::MULTILINE;

constexpr int32_t java::util::regex::Pattern::LITERAL;

constexpr int32_t java::util::regex::Pattern::DOTALL;

constexpr int32_t java::util::regex::Pattern::UNICODE_CASE;

constexpr int32_t java::util::regex::Pattern::CANON_EQ;

void java::util::regex::Pattern::ctor(::java::lang::String* pattern, int32_t flags)
{
    super::ctor();
    this->pattern_ = pattern;
    this->patternFlags = flags;
    if(!trivial(pattern)) {
        throw new ::java::lang::UnsupportedOperationException(u"only trivial regular expressions are supported so far"_j);
    }
}

bool java::util::regex::Pattern::trivial(::java::lang::String* pattern)
{
    clinit();
    for (auto i = int32_t(0); i < npc(pattern)->length(); ++i) {
        auto c = npc(pattern)->charAt(i);
        switch (c) {
        case u'\\':
        case u'.':
        case u'*':
        case u'+':
        case u'?':
        case u'|':
        case u'[':
        case u']':
        case u'{':
        case u'}':
        case u'(':
        case u')':
        case u'^':
        case u'$':
            return false;
        }

    }
    return true;
}

java::util::regex::Pattern* java::util::regex::Pattern::compile(::java::lang::String* regex)
{
    clinit();
    return new Pattern(regex, int32_t(0));
}

java::util::regex::Pattern* java::util::regex::Pattern::compile(::java::lang::String* regex, int32_t flags)
{
    clinit();
    return new Pattern(regex, flags);
}

int32_t java::util::regex::Pattern::flags()
{
    return patternFlags;
}

java::util::regex::Matcher* java::util::regex::Pattern::matcher(::java::lang::CharSequence* input)
{
    return new Matcher(this, input);
}

bool java::util::regex::Pattern::matches(::java::lang::String* regex, ::java::lang::CharSequence* input)
{
    clinit();
    return npc(npc(Pattern::compile(regex))->matcher(input))->matches();
}

java::lang::String* java::util::regex::Pattern::pattern()
{
    return pattern_;
}

java::lang::StringArray* java::util::regex::Pattern::split(::java::lang::CharSequence* input)
{
    return split(input, 0);
}

java::lang::StringArray* java::util::regex::Pattern::split(::java::lang::CharSequence* input, int32_t limit)
{
    bool strip;
    if(limit < 0) {
        strip = false;
        limit = ::java::lang::Integer::MAX_VALUE;
    } else if(limit == 0) {
        strip = true;
        limit = ::java::lang::Integer::MAX_VALUE;
    } else {
        strip = false;
    }
    ::java::util::List* list = new ::java::util::LinkedList();
    auto index = int32_t(0);
    auto trailing = int32_t(0);
    auto patternLength = npc(pattern_)->length();
    while (index < npc(input)->length() && npc(list)->size() < limit - int32_t(1)) {
        int32_t i;
        if(patternLength == 0) {
            if(npc(list)->size() == 0) {
                i = 0;
            } else {
                i = index + int32_t(1);
            }
        } else {
            i = indexOf(input, pattern_, index);
        }
        if(i >= 0) {
            if(patternLength != 0 && i == index) {
                ++trailing;
            } else {
                trailing = 0;
            }
            npc(list)->add(static_cast< ::java::lang::Object* >(npc(input)->subSequence(index, i)));
            index = i + patternLength;
        } else {
            break;
        }
    }
    if(strip && index > 0 && index == npc(input)->length()) {
        ++trailing;
    } else {
        trailing = 0;
    }
    npc(list)->add(static_cast< ::java::lang::Object* >(npc(input)->subSequence(index, npc(input)->length())));
    auto result = new ::java::lang::StringArray(npc(list)->size() - trailing);
    auto i = int32_t(0);
    for (auto *it = npc(list)->iterator(); npc(it)->hasNext() && i < npc(result)->length; ++i) {
        result->set(i, npc(java_cast< ::java::lang::CharSequence* >(npc(it)->next()))->toString());
    }
    return result;
}

int32_t java::util::regex::Pattern::indexOf(::java::lang::CharSequence* haystack, ::java::lang::CharSequence* needle, int32_t start)
{
    clinit();
    if(npc(needle)->length() == 0)
        return start;

    for (auto i = start; i < npc(haystack)->length() - npc(needle)->length() + int32_t(1); ++i) {
        auto j = int32_t(0);
        for (; j < npc(needle)->length(); ++j) {
            if(npc(haystack)->charAt(i + j) != npc(needle)->charAt(j)) {
                break;
            }
        }
        if(j == npc(needle)->length()) {
            return i;
        }
    }
    return -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::regex::Pattern::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.regex.Pattern", 23);
    return c;
}

java::lang::Class* java::util::regex::Pattern::getClass0()
{
    return class_();
}

