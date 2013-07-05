// Generated from /runtime/avian/Cell.java
#include <avian/Cell.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

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

avian::Cell::Cell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Cell::Cell(::java::lang::Object* value, Cell* next) 
    : Cell(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,next);
}

void avian::Cell::ctor(::java::lang::Object* value, Cell* next)
{
    super::ctor();
    this->value = value;
    this->next = next;
}

java::lang::String* avian::Cell::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"("_j);
    for (auto *c = this; c != nullptr; c = npc(c)->next) {
        npc(sb)->append(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(value)));
        if(npc(c)->next != nullptr) {
            npc(sb)->append(u" "_j);
        }
    }
    npc(sb)->append(u")"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Cell::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Cell", 10);
    return c;
}

java::lang::Class* avian::Cell::getClass0()
{
    return class_();
}

