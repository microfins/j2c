// Generated from /runtime/java/util/Stack.java
#include <java/util/Stack.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::Stack::Stack(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Stack::Stack()
    : Stack(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool java::util::Stack::empty()
{
    return size() == 0;
}

java::lang::Object* java::util::Stack::peek()
{
    return java_cast< ::java::lang::Object* >(get(size() - int32_t(1)));
}

java::lang::Object* java::util::Stack::pop()
{
    return java_cast< ::java::lang::Object* >(remove(size() - int32_t(1)));
}

java::lang::Object* java::util::Stack::push(::java::lang::Object* element)
{
    add(static_cast< ::java::lang::Object* >(element));
    return element;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Stack::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Stack", 15);
    return c;
}

java::lang::Class* java::util::Stack::getClass0()
{
    return class_();
}

