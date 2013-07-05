// Generated from /runtime/java/util/TreeSet.java
#include <java/util/TreeSet_MyIterator.hpp>

#include <avian/Cell.hpp>
#include <avian/PersistentSet_Path.hpp>
#include <avian/PersistentSet.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/TreeSet.hpp>

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

java::util::TreeSet_MyIterator::TreeSet_MyIterator(TreeSet *TreeSet_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeSet_this(TreeSet_this)
{
    clinit();
}

java::util::TreeSet_MyIterator::TreeSet_MyIterator(TreeSet *TreeSet_this, ::avian::PersistentSet_Path* path) 
    : TreeSet_MyIterator(TreeSet_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::util::TreeSet_MyIterator::TreeSet_MyIterator(TreeSet *TreeSet_this, TreeSet_MyIterator* start) 
    : TreeSet_MyIterator(TreeSet_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(start);
}

void java::util::TreeSet_MyIterator::init()
{
    canRemove = false;
}

void java::util::TreeSet_MyIterator::ctor(::avian::PersistentSet_Path* path)
{
    super::ctor();
    init();
    this->path = path;
    if(path != nullptr) {
        cell = java_cast< ::avian::Cell* >(npc(path)->value());
        nextPath = npc(path)->successor();
    }
}

void java::util::TreeSet_MyIterator::ctor(TreeSet_MyIterator* start)
{
    super::ctor();
    init();
    path = npc(start)->path;
    nextPath = npc(start)->nextPath;
    cell = npc(start)->cell;
    prevCell = npc(start)->prevCell;
    prevPrevCell = npc(start)->prevPrevCell;
    canRemove = npc(start)->canRemove;
}

bool java::util::TreeSet_MyIterator::hasNext()
{
    return cell != nullptr || nextPath != nullptr;
}

java::lang::Object* java::util::TreeSet_MyIterator::next()
{
    if(cell == nullptr) {
        path = nextPath;
        nextPath = npc(path)->successor();
        cell = java_cast< ::avian::Cell* >(npc(path)->value());
    }
    prevPrevCell = prevCell;
    prevCell = cell;
    cell = npc(cell)->next;
    canRemove = true;
    return java_cast< ::java::lang::Object* >(npc(prevCell)->value);
}

void java::util::TreeSet_MyIterator::remove()
{
    if(!canRemove)
        throw new ::java::lang::IllegalStateException();

    if(prevPrevCell != nullptr && npc(prevPrevCell)->next == prevCell) {
        npc(prevPrevCell)->next = npc(prevCell)->next;
        prevCell = prevPrevCell;
    } else if(npc(prevCell)->next == cell && cell != nullptr) {
        TreeSet_this->set = java_cast< ::avian::PersistentSet* >(npc(path)->replaceWith(cell));
        prevCell = nullptr;
    } else {
        TreeSet_this->set = java_cast< ::avian::PersistentSet* >(npc(path)->remove());
        path = npc(path)->successor();
        if(path != nullptr) {
            prevCell = nullptr;
            cell = java_cast< ::avian::Cell* >(npc(path)->value());
            path = java_cast< ::avian::PersistentSet_Path* >(npc(TreeSet_this->set)->find(java_cast< ::avian::Cell* >(cell)));
        }
    }
    canRemove = false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeSet_MyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeSet.MyIterator", 28);
    return c;
}

java::lang::Class* java::util::TreeSet_MyIterator::getClass0()
{
    return class_();
}

