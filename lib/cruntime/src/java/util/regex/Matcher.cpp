// Generated from /runtime/java/util/regex/Matcher.java
#include <java/util/regex/Matcher.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Pattern.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::regex::Matcher::Matcher(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::regex::Matcher::Matcher(Pattern* pattern, ::java::lang::CharSequence* input) 
    : Matcher(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern,input);
}

void java::util::regex::Matcher::ctor(Pattern* pattern, ::java::lang::CharSequence* input)
{
    super::ctor();
    this->pattern = pattern;
    this->input = input;
}

bool java::util::regex::Matcher::matches()
{
    if(npc(npc(pattern)->pattern())->equals(static_cast< ::java::lang::Object* >(npc(input)->toString()))) {
        start_ = 0;
        end_ = npc(input)->length();
        return true;
    } else {
        return false;
    }
}

java::util::regex::Matcher* java::util::regex::Matcher::reset()
{
    return reset(input);
}

java::util::regex::Matcher* java::util::regex::Matcher::reset(::java::lang::CharSequence* input)
{
    this->input = input;
    start_ = 0;
    end_ = 0;
    return this;
}

int32_t java::util::regex::Matcher::start()
{
    return start_;
}

java::lang::String* java::util::regex::Matcher::replaceAll(::java::lang::String* replacement)
{
    return replace(replacement, ::java::lang::Integer::MAX_VALUE);
}

java::lang::String* java::util::regex::Matcher::replaceFirst(::java::lang::String* replacement)
{
    return replace(replacement, 1);
}

java::lang::String* java::util::regex::Matcher::replace(::java::lang::String* replacement, int32_t limit)
{
    reset();
    ::java::lang::StringBuilder* sb = nullptr;
    auto index = int32_t(0);
    auto count = int32_t(0);
    while (count < limit && index < npc(input)->length()) {
        if(find(index)) {
            if(sb == nullptr) {
                sb = new ::java::lang::StringBuilder();
            }
            if(start_ > index) {
                npc(sb)->append(npc(input)->subSequence(index, start_));
            }
            npc(sb)->append(replacement);
            index = end_;
            ++count;
        } else if(index == 0) {
            return npc(input)->toString();
        } else {
            break;
        }
    }
    if(index < npc(input)->length()) {
        npc(sb)->append(npc(input)->subSequence(index, npc(input)->length()));
    }
    return npc(sb)->toString();
}

int32_t java::util::regex::Matcher::end()
{
    return end_;
}

bool java::util::regex::Matcher::find()
{
    return find(end_);
}

bool java::util::regex::Matcher::find(int32_t start)
{
    auto p = npc(pattern)->pattern();
    auto i = Pattern::indexOf(input, p, start);
    if(i >= 0) {
        this->start_ = i;
        this->end_ = i + npc(p)->length();
        return true;
    } else {
        return false;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::regex::Matcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.regex.Matcher", 23);
    return c;
}

java::lang::Class* java::util::regex::Matcher::getClass0()
{
    return class_();
}

