// Generated from /runtime/java/lang/Object.java
#include <java/lang/Object.hpp>

#include <avian/SystemClassLoader.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Object::Object(const ::default_init_tag&)
{
    clinit();
}

java::lang::Object::Object()
    : Object(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::Object::ctor()
{
}

java::lang::Object* java::lang::Object::clone() /* throws(CloneNotSupportedException) */
{
    if((dynamic_cast< Cloneable* >(this) != nullptr) || npc(getClass())->isArray_()) {
        return clone(this);
    } else {
        throw new CloneNotSupportedException(npc(getClass())->getName());
    }
}

bool java::lang::Object::equals(Object* o)
{
    return this == o;
}

void java::lang::Object::finalize() /* throws(Throwable) */
{
}

java::lang::Class* java::lang::Object::getClass()
{
    return ::avian::SystemClassLoader::getClass(getVMClass(this));
}

void java::lang::Object::wait() /* throws(InterruptedException) */
{
    wait(0);
}

void java::lang::Object::wait(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */
{
    if(nanoseconds != 0) {
        ++milliseconds;
    }
    wait(milliseconds);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Object::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Object", 16);
    return c;
}

void java::lang::Object::clinit()
{
}

java::lang::Object::~Object()
{
}

java::lang::Class* java::lang::Object::getClass0()
{
    return class_();
}

