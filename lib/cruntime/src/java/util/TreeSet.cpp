// Generated from /runtime/java/util/TreeSet.java
#include <java/util/TreeSet.hpp>

#include <avian/Cell.hpp>
#include <avian/PersistentSet_Path.hpp>
#include <avian/PersistentSet.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <java/util/TreeSet_TreeSet_1.hpp>
#include <java/util/TreeSet_TreeSet_2.hpp>
#include <java/util/TreeSet_MyIterator.hpp>
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

java::util::TreeSet::TreeSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeSet::TreeSet(Comparator* comparator) 
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(comparator);
}

java::util::TreeSet::TreeSet() 
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::TreeSet::TreeSet(Collection* collection) 
    : TreeSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(collection);
}

void java::util::TreeSet::ctor(Comparator* comparator)
{
    super::ctor();
    set = new ::avian::PersistentSet(new TreeSet_TreeSet_1(this, comparator));
}

void java::util::TreeSet::ctor()
{
    ctor(static_cast< Comparator* >(new TreeSet_TreeSet_2(this)));
}

void java::util::TreeSet::ctor(Collection* collection)
{
    ctor();
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* item = java_cast< ::java::lang::Object* >(_i->next());
        {
            add(item);
        }
    }
}

java::lang::Object* java::util::TreeSet::first()
{
    if(isEmpty())
        throw new NoSuchElementException();

    return java_cast< ::java::lang::Object* >(npc(java_cast< ::avian::Cell* >(npc(npc(set)->first())->value()))->value);
}

java::lang::Object* java::util::TreeSet::last()
{
    if(isEmpty())
        throw new NoSuchElementException();

    return java_cast< ::java::lang::Object* >(npc(java_cast< ::avian::Cell* >(npc(npc(set)->last())->value()))->value);
}

java::util::Iterator* java::util::TreeSet::iterator()
{
    return new TreeSet_MyIterator(this, static_cast< ::avian::PersistentSet_Path* >(npc(set)->first()));
}

java::lang::String* java::util::TreeSet::toString()
{
    return Collections::toString(static_cast< Collection* >(this));
}

bool java::util::TreeSet::add(::java::lang::Object* value)
{
    auto p = npc(set)->find(new ::avian::Cell(value, nullptr));
    if(npc(p)->fresh()) {
        set = npc(p)->add();
        return true;
    }
    return false;
}

java::lang::Object* java::util::TreeSet::addAndReplace(::java::lang::Object* value)
{
    auto p = npc(set)->find(new ::avian::Cell(value, nullptr));
    if(npc(p)->fresh()) {
        set = npc(p)->add();
        return nullptr;
    } else {
        auto old = java_cast< ::java::lang::Object* >(npc(java_cast< ::avian::Cell* >(npc(p)->value()))->value);
        set = npc(p)->replaceWith(new ::avian::Cell(value, nullptr));
        return old;
    }
}

java::lang::Object* java::util::TreeSet::find(::java::lang::Object* value)
{
    auto p = npc(set)->find(new ::avian::Cell(value, nullptr));
    return npc(p)->fresh() ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(java_cast< ::avian::Cell* >(npc(p)->value()))->value);
}

java::lang::Object* java::util::TreeSet::removeAndReturn(::java::lang::Object* value)
{
    auto cell = removeCell(value);
    return cell == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(cell)->value);
}

avian::Cell* java::util::TreeSet::removeCell(::java::lang::Object* value)
{
    auto p = npc(set)->find(new ::avian::Cell(value, nullptr));
    if(npc(p)->fresh()) {
        return nullptr;
    } else {
        auto old = java_cast< ::avian::Cell* >(npc(p)->value());
        if(java_cast< ::avian::Cell* >(npc(java_cast< ::avian::Cell* >(npc(p)->value()))->next) != nullptr) {
            set = npc(p)->replaceWith(java_cast< ::avian::Cell* >(npc(java_cast< ::avian::Cell* >(npc(p)->value()))->next));
        } else {
            set = npc(p)->remove();
        }
        return old;
    }
}

bool java::util::TreeSet::remove(::java::lang::Object* value)
{
    return removeCell(value) != nullptr;
}

int32_t java::util::TreeSet::size()
{
    return npc(set)->size();
}

bool java::util::TreeSet::isEmpty()
{
    return npc(set)->size() == 0;
}

bool java::util::TreeSet::contains(::java::lang::Object* value)
{
    return !npc(npc(set)->find(new ::avian::Cell(value, nullptr)))->fresh();
}

void java::util::TreeSet::clear()
{
    set = new ::avian::PersistentSet(npc(set)->comparator());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeSet", 17);
    return c;
}

bool java::util::TreeSet::addAll(Collection* collection)
{
    return AbstractCollection::addAll(collection);
}

bool java::util::TreeSet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::TreeSet::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::TreeSet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::TreeSet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

java::lang::Class* java::util::TreeSet::getClass0()
{
    return class_();
}

