// Generated from /runtime/java/util/Arrays.java
#include <java/util/Arrays.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays_sort_1.hpp>
#include <java/util/Arrays_asList_2.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/List.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Arrays::Arrays(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Arrays::Arrays() 
    : Arrays(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::Arrays::ctor()
{
    super::ctor();
}

java::lang::String* java::util::Arrays::toString(::java::lang::ObjectArray* a)
{
    clinit();
    return npc(asList(a))->toString();
}

java::lang::String* java::util::Arrays::toString(::int8_tArray* a)
{
    clinit();
    if(a == nullptr) {
        return u"null"_j;
    } else {
        auto sb = new ::java::lang::StringBuilder();
        npc(sb)->append(u"["_j);
        for (auto i = int32_t(0); i < npc(a)->length; ++i) {
            npc(sb)->append(::java::lang::String::valueOf((*a)[i]));
            if(i + int32_t(1) != npc(a)->length) {
                npc(sb)->append(u", "_j);
            }
        }
        npc(sb)->append(u"]"_j);
        return npc(sb)->toString();
    }
}

bool java::util::Arrays::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    clinit();
    return (a == nullptr && b == nullptr) || (a != nullptr && npc(a)->equals(b));
}

void java::util::Arrays::sort(::java::lang::ObjectArray* array)
{
    clinit();
    sort(array, new Arrays_sort_1());
}

/* <T> */void java::util::Arrays::sort(::java::lang::ObjectArray* array, Comparator* comparator)
{
    clinit();
    for (auto j = int32_t(1); j < npc(array)->length; ++j) {
        auto t = (*array)[j];
        auto i = j - int32_t(1);
        while (i >= 0 && npc(comparator)->compare((*array)[i], t) > 0) {
            array->set(i + int32_t(1), (*array)[i]);
            i = i - int32_t(1);
        }
        array->set(i + int32_t(1), t);
    }
}

int32_t java::util::Arrays::hashCode(::java::lang::ObjectArray* array)
{
    clinit();
    if(array == nullptr) {
        return 9023;
    }
    auto hc = int32_t(823347);
    for(auto o : *npc(array)) {
        hc += o != nullptr ? npc(o)->hashCode() : int32_t(54267);
        hc *= 3;
    }
    return hc;
}

bool java::util::Arrays::equals(::java::lang::ObjectArray* a, ::java::lang::ObjectArray* b)
{
    clinit();
    if(a == b) {
        return true;
    }
    if(a == nullptr || b == nullptr) {
        return false;
    }
    if(npc(a)->length != npc(b)->length) {
        return false;
    }
    for (auto i = int32_t(0); i < npc(a)->length; i++) {
        if(!equal((*a)[i], (*b)[i])) {
            return false;
        }
    }
    return true;
}

/* <T> */java::util::List* java::util::Arrays::asList(::java::lang::ObjectArray*/*...*/ array)
{
    clinit();
    return new Arrays_asList_2(array);
}

void java::util::Arrays::fill(::int32_tArray* array, int32_t value)
{
    clinit();
    for (auto i = int32_t(0); i < npc(array)->length; i++) {
        (*array)[i] = value;
    }
}

void java::util::Arrays::fill(::char16_tArray* array, char16_t value)
{
    clinit();
    for (auto i = int32_t(0); i < npc(array)->length; i++) {
        (*array)[i] = value;
    }
}

/* <T> */void java::util::Arrays::fill(::java::lang::ObjectArray* array, ::java::lang::Object* value)
{
    clinit();
    for (auto i = int32_t(0); i < npc(array)->length; i++) {
        array->set(i, value);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Arrays::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Arrays", 16);
    return c;
}

bool java::util::Arrays::equals(::java::lang::Object* o)
{
    return super::equals(o);
}

int32_t java::util::Arrays::hashCode()
{
    return super::hashCode();
}

java::lang::String* java::util::Arrays::toString()
{
    return super::toString();
}

java::lang::Class* java::util::Arrays::getClass0()
{
    return class_();
}

