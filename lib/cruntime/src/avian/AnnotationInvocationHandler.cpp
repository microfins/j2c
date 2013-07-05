// Generated from /runtime/avian/AnnotationInvocationHandler.java
#include <avian/AnnotationInvocationHandler.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/reflect/Method.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::AnnotationInvocationHandler::AnnotationInvocationHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::AnnotationInvocationHandler::AnnotationInvocationHandler(::java::lang::ObjectArray* data) 
    : AnnotationInvocationHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

void avian::AnnotationInvocationHandler::ctor(::java::lang::ObjectArray* data)
{
    super::ctor();
    this->data = data;
}

java::lang::Object* avian::AnnotationInvocationHandler::invoke(::java::lang::Object* proxy, ::java::lang::reflect::Method* method, ::java::lang::ObjectArray* arguments)
{
    for (auto i = int32_t(2); i < npc(data)->length; i += 2) {
        if(npc(npc(method)->getName())->equals((*data)[i])) {
            return (*data)[i + int32_t(1)];
        }
    }
    throw new ::java::lang::IllegalArgumentException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::AnnotationInvocationHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.AnnotationInvocationHandler", 33);
    return c;
}

java::lang::Class* avian::AnnotationInvocationHandler::getClass0()
{
    return class_();
}

