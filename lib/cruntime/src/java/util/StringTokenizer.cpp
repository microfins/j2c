// Generated from /runtime/java/util/StringTokenizer.java
#include <java/util/StringTokenizer.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/NoSuchElementException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::StringTokenizer::StringTokenizer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* in, ::java::lang::String* delimiters, bool includeDelimiters) 
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,delimiters,includeDelimiters);
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* in, ::java::lang::String* delimiters) 
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,delimiters);
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* in) 
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::util::StringTokenizer::ctor(::java::lang::String* in, ::java::lang::String* delimiters, bool includeDelimiters)
{
    super::ctor();
    this->in = in;
    this->delimiters = delimiters;
    this->includeDelimiters = includeDelimiters;
}

void java::util::StringTokenizer::ctor(::java::lang::String* in, ::java::lang::String* delimiters)
{
    ctor(in, delimiters, false);
}

void java::util::StringTokenizer::ctor(::java::lang::String* in)
{
    ctor(in, u" \t\r\n\f"_j);
}

bool java::util::StringTokenizer::isDelimiter(char16_t c)
{
    return npc(delimiters)->indexOf(static_cast< int32_t >(c)) >= 0;
}

int32_t java::util::StringTokenizer::countTokens()
{
    auto count = int32_t(0);
    auto sawNonDelimiter = false;
    for (auto i = position; i < npc(in)->length(); ++i) {
        if(isDelimiter(npc(in)->charAt(i))) {
            if(sawNonDelimiter) {
                sawNonDelimiter = false;
                ++count;
            }
            if(includeDelimiters) {
                ++count;
            }
        } else {
            sawNonDelimiter = true;
        }
    }
    if(sawNonDelimiter) {
        ++count;
    }
    return count;
}

bool java::util::StringTokenizer::hasMoreTokens()
{
    for (auto i = position; i < npc(in)->length(); ++i) {
        if(isDelimiter(npc(in)->charAt(i))) {
            if(includeDelimiters) {
                return true;
            }
        } else {
            position = i;
            return true;
        }
    }
    return false;
}

java::lang::String* java::util::StringTokenizer::nextToken()
{
    for (auto i = position; i < npc(in)->length(); ++i) {
        if(isDelimiter(npc(in)->charAt(i))) {
            if(includeDelimiters) {
                return npc(in)->substring(i, i + int32_t(1));
            }
        } else {
            position = i;
            while (position < npc(in)->length() && !isDelimiter(npc(in)->charAt(position))) {
                ++position;
            }
            return npc(in)->substring(i, position);
        }
    }
    throw new NoSuchElementException();
}

java::lang::String* java::util::StringTokenizer::nextToken(::java::lang::String* delimiters)
{
    this->delimiters = delimiters;
    return nextToken();
}

bool java::util::StringTokenizer::hasMoreElements()
{
    return hasMoreTokens();
}

java::lang::Object* java::util::StringTokenizer::nextElement()
{
    return nextToken();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::StringTokenizer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.StringTokenizer", 25);
    return c;
}

java::lang::Class* java::util::StringTokenizer::getClass0()
{
    return class_();
}

