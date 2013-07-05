// Generated from /runtime/java/util/AbstractCollection.java
#include <java/util/AbstractCollection.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
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

java::util::AbstractCollection::AbstractCollection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractCollection::AbstractCollection()
    : AbstractCollection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool java::util::AbstractCollection::add(::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"adding to "_j)->append(npc(this->getClass())->getName())->toString());
}

bool java::util::AbstractCollection::addAll(Collection* collection)
{
    auto result = false;
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* obj = java_cast< ::java::lang::Object* >(_i->next());
        {
            result |= add(obj);
        }
    }
    return result;
}

void java::util::AbstractCollection::clear()
{
    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"clear() in "_j)->append(npc(this->getClass())->getName())->toString());
}

bool java::util::AbstractCollection::contains(::java::lang::Object* element)
{
    if(element != nullptr) {
        for (auto *iter = iterator(); npc(iter)->hasNext(); ) {
            if(npc(element)->equals(java_cast< ::java::lang::Object* >(npc(iter)->next()))) {
                return true;
            }
        }
    } else {
        for (auto *iter = iterator(); npc(iter)->hasNext(); ) {
            if(java_cast< ::java::lang::Object* >(npc(iter)->next()) == nullptr) {
                return true;
            }
        }
    }
    return false;
}

bool java::util::AbstractCollection::containsAll(Collection* c)
{
    if(c == nullptr) {
        throw new ::java::lang::NullPointerException(u"Collection is null"_j);
    }
    auto it = npc(c)->iterator();
    while (npc(it)->hasNext()) {
        if(!contains(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(it)->next())))) {
            return false;
        }
    }
    return true;
}

bool java::util::AbstractCollection::isEmpty()
{
    return size() == 0;
}

bool java::util::AbstractCollection::remove(::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"remove(T) in "_j)->append(npc(this->getClass())->getName())->toString());
}

bool java::util::AbstractCollection::removeAll(Collection* c)
{
    if(c == nullptr) {
        throw new ::java::lang::NullPointerException(u"Collection is null"_j);
    }
    auto changed = false;
    auto it = npc(c)->iterator();
    while (npc(it)->hasNext()) {
        changed = remove(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(it)->next()))) || changed;
    }
    return changed;
}

java::lang::ObjectArray* java::util::AbstractCollection::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <S> */java::lang::ObjectArray* java::util::AbstractCollection::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

java::lang::String* java::util::AbstractCollection::toString()
{
    return Collections::toString(static_cast< Collection* >(this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractCollection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractCollection", 28);
    return c;
}

java::lang::Class* java::util::AbstractCollection::getClass0()
{
    return class_();
}

