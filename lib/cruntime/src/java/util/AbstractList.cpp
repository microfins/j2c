// Generated from /runtime/java/util/AbstractList.java
#include <java/util/AbstractList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_ArrayListIterator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/ListIterator.hpp>
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

java::util::AbstractList::AbstractList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractList::AbstractList()
    : AbstractList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool java::util::AbstractList::add(::java::lang::Object* o)
{
    add(size(), o);
    return true;
}

bool java::util::AbstractList::addAll(Collection* c)
{
    return addAll(size(), static_cast< Collection* >(c));
}

bool java::util::AbstractList::addAll(int32_t startIndex, Collection* c)
{
    if(c == nullptr) {
        throw new ::java::lang::NullPointerException(u"Collection is null"_j);
    }
    auto index = startIndex;
    auto changed = false;
    auto it = npc(c)->iterator();
    while (npc(it)->hasNext()) {
        add(index++, java_cast< ::java::lang::Object* >(npc(it)->next()));
        changed = true;
    }
    return changed;
}

java::util::Iterator* java::util::AbstractList::iterator()
{
    return listIterator();
}

java::util::ListIterator* java::util::AbstractList::listIterator()
{
    return new Collections_ArrayListIterator(this);
}

int32_t java::util::AbstractList::indexOf(::java::lang::Object* o)
{
    auto i = int32_t(0);
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* v = java_cast< ::java::lang::Object* >(_i->next());
        {
            if(o == nullptr) {
                if(v == nullptr) {
                    return i;
                }
            } else if(npc(o)->equals(v)) {
                return i;
            }
            ++i;
        }
    }
    return -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractList", 22);
    return c;
}

void java::util::AbstractList::clear()
{
    AbstractCollection::clear();
}

bool java::util::AbstractList::contains(::java::lang::Object* element)
{
    return AbstractCollection::contains(element);
}

bool java::util::AbstractList::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::AbstractList::remove(::java::lang::Object* element)
{
    return AbstractCollection::remove(element);
}

bool java::util::AbstractList::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::AbstractList::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::AbstractList::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

bool java::util::AbstractList::isEmpty()
{
    return AbstractCollection::isEmpty();
}

java::lang::Class* java::util::AbstractList::getClass0()
{
    return class_();
}

