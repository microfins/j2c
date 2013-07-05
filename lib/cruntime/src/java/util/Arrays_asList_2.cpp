// Generated from /runtime/java/util/Arrays.java
#include <java/util/Arrays_asList_2.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collections_ArrayListIterator.hpp>
#include <java/util/ListIterator.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Arrays_asList_2::Arrays_asList_2(::java::lang::ObjectArray* array)
    : super(*static_cast< ::default_init_tag* >(0))
    , array(array)
{
    clinit();
    ctor();
}

int32_t java::util::Arrays_asList_2::size()
{
    return npc(array)->length;
}

void java::util::Arrays_asList_2::add(int32_t index, ::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException();
}

int32_t java::util::Arrays_asList_2::indexOf(::java::lang::Object* element)
{
    for (auto i = int32_t(0); i < npc(array)->length; ++i) {
        if(Arrays::equal(element, (*array)[i])) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::util::Arrays_asList_2::lastIndexOf(::java::lang::Object* element)
{
    for (auto i = npc(array)->length - int32_t(1); i >= 0; --i) {
        if(Arrays::equal(element, (*array)[i])) {
            return i;
        }
    }
    return -int32_t(1);
}

java::lang::Object* java::util::Arrays_asList_2::get(int32_t index)
{
    return (*array)[index];
}

java::lang::Object* java::util::Arrays_asList_2::set(int32_t index, ::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::lang::Object* java::util::Arrays_asList_2::remove(int32_t index)
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::util::ListIterator* java::util::Arrays_asList_2::listIterator(int32_t index)
{
    return new Collections_ArrayListIterator(this, index);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Arrays_asList_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool java::util::Arrays_asList_2::add(::java::lang::Object* o)
{
    return super::add(o);
}

java::util::ListIterator* java::util::Arrays_asList_2::listIterator()
{
    return super::listIterator();
}

bool java::util::Arrays_asList_2::remove(::java::lang::Object* element)
{
    return super::remove(element);
}

java::lang::Class* java::util::Arrays_asList_2::getClass0()
{
    return class_();
}

