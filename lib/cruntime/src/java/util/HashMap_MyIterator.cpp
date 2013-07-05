// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_MyIterator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::HashMap_Cell, ::java::lang::ObjectArray, Map_EntryArray > HashMap_CellArray;
    } // util
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::HashMap_MyIterator::HashMap_MyIterator(HashMap *HashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HashMap_this(HashMap_this)
{
    clinit();
}

java::util::HashMap_MyIterator::HashMap_MyIterator(HashMap *HashMap_this) 
    : HashMap_MyIterator(HashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::HashMap_MyIterator::init()
{
    currentIndex = -int32_t(1);
    nextIndex = -int32_t(1);
}

void java::util::HashMap_MyIterator::ctor()
{
    super::ctor();
    init();
    hasNext();
}

java::util::Map_Entry* java::util::HashMap_MyIterator::next()
{
    if(hasNext()) {
        if(currentCell != nullptr) {
            if(npc(currentCell)->next() != nullptr) {
                previousCell = currentCell;
            } else {
                previousCell = nullptr;
            }
        }
        currentCell = nextCell;
        currentIndex = nextIndex;
        nextCell = npc(nextCell)->next();
        return currentCell;
    } else {
        throw new NoSuchElementException();
    }
}

bool java::util::HashMap_MyIterator::hasNext()
{
    if(HashMap_this->array != nullptr) {
        while (nextCell == nullptr && ++nextIndex < npc(HashMap_this->array)->length) {
            if((*HashMap_this->array)[nextIndex] != nullptr) {
                nextCell = (*HashMap_this->array)[nextIndex];
                return true;
            }
        }
    }
    return nextCell != nullptr;
}

void java::util::HashMap_MyIterator::remove()
{
    if(currentCell != nullptr) {
        if(previousCell == nullptr) {
            HashMap_this->array->set(currentIndex, npc(currentCell)->next());
        } else {
            npc(previousCell)->setNext(npc(currentCell)->next());
            if(npc(previousCell)->next() == nullptr) {
                previousCell = nullptr;
            }
        }
        currentCell = nullptr;
        --HashMap_this->size_;
    } else {
        throw new ::java::lang::IllegalStateException();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_MyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.MyIterator", 28);
    return c;
}

java::lang::Class* java::util::HashMap_MyIterator::getClass0()
{
    return class_();
}

