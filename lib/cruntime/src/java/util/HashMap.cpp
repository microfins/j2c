// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap_EntrySet.hpp>
#include <java/util/HashMap_Helper.hpp>
#include <java/util/HashMap_KeySet.hpp>
#include <java/util/HashMap_MyHelper.hpp>
#include <java/util/HashMap_MyIterator.hpp>
#include <java/util/HashMap_Values.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
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

java::util::HashMap::HashMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap::HashMap(int32_t capacity, HashMap_Helper* helper) 
    : HashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity,helper);
}

java::util::HashMap::HashMap(int32_t capacity) 
    : HashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::HashMap::HashMap() 
    : HashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::HashMap::HashMap(Map* map) 
    : HashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(map);
}

constexpr int32_t java::util::HashMap::MinimumCapacity;

void java::util::HashMap::ctor(int32_t capacity, HashMap_Helper* helper)
{
    super::ctor();
    if(capacity > 0) {
        array = new HashMap_CellArray(nextPowerOfTwo(capacity));
    }
    this->helper = helper;
}

void java::util::HashMap::ctor(int32_t capacity)
{
    ctor(capacity, new HashMap_MyHelper());
}

void java::util::HashMap::ctor()
{
    ctor(int32_t(0));
}

void java::util::HashMap::ctor(Map* map)
{
    ctor(npc(map)->size());
    for (auto _i = npc(npc(map)->entrySet())->iterator(); _i->hasNext(); ) {
        Map_Entry* entry = java_cast< Map_Entry* >(_i->next());
        {
            put(java_cast< ::java::lang::Object* >(npc(entry)->getKey()), java_cast< ::java::lang::Object* >(npc(entry)->getValue()));
        }
    }
}

java::lang::String* java::util::HashMap::toString()
{
    return Collections::toString(static_cast< Map* >(this));
}

int32_t java::util::HashMap::nextPowerOfTwo(int32_t n)
{
    clinit();
    auto r = int32_t(1);
    while (r < n) 
                r <<= 1;

    return r;
}

bool java::util::HashMap::isEmpty()
{
    return size() == 0;
}

int32_t java::util::HashMap::size()
{
    return size_;
}

void java::util::HashMap::grow()
{
    if(array == nullptr || size_ >= npc(array)->length * int32_t(2)) {
        resize(array == nullptr ? MinimumCapacity : npc(array)->length * int32_t(2));
    }
}

void java::util::HashMap::shrink()
{
    if(npc(array)->length / int32_t(2) >= MinimumCapacity && size_ <= npc(array)->length / int32_t(3)) {
        resize(npc(array)->length / int32_t(2));
    }
}

void java::util::HashMap::resize(int32_t capacity)
{
    HashMap_CellArray* newArray_ = nullptr;
    if(capacity != 0) {
        capacity = nextPowerOfTwo(capacity);
        if(array != nullptr && npc(array)->length == capacity) {
            return;
        }
        newArray_ = new HashMap_CellArray(capacity);
        if(array != nullptr) {
            for (auto i = int32_t(0); i < npc(array)->length; ++i) {
                HashMap_Cell* next;
                for (auto *c = (*array)[i]; c != nullptr; c = next) {
                    next = npc(c)->next();
                    auto index = npc(c)->hashCode() & (capacity - int32_t(1));
                    npc(c)->setNext((*newArray_)[index]);
                    newArray_->set(index, c);
                }
            }
        }
    }
    array = newArray_;
}

java::util::HashMap_Cell* java::util::HashMap::find(::java::lang::Object* key)
{
    if(array != nullptr) {
        auto index = npc(helper)->hash(key) & (npc(array)->length - int32_t(1));
        for (auto *c = (*array)[index]; c != nullptr; c = npc(c)->next()) {
            if(npc(helper)->equal(key, java_cast< ::java::lang::Object* >(npc(c)->getKey()))) {
                return c;
            }
        }
    }
    return nullptr;
}

void java::util::HashMap::insert(HashMap_Cell* cell)
{
    ++size_;
    grow();
    auto index = npc(cell)->hashCode() & (npc(array)->length - int32_t(1));
    npc(cell)->setNext((*array)[index]);
    array->set(index, cell);
}

void java::util::HashMap::remove(HashMap_Cell* cell)
{
    auto index = npc(cell)->hashCode() & (npc(array)->length - int32_t(1));
    HashMap_Cell* p = nullptr;
    for (auto *c = (*array)[index]; c != nullptr; c = npc(c)->next()) {
        if(c == cell) {
            if(p == nullptr) {
                array->set(index, npc(c)->next());
            } else {
                npc(p)->setNext(npc(c)->next());
            }
            --size_;
            break;
        }
    }
    shrink();
}

java::util::HashMap_Cell* java::util::HashMap::putCell(::java::lang::Object* key, ::java::lang::Object* value)
{
    auto c = find(key);
    if(c == nullptr) {
        insert(npc(helper)->make(key, value, nullptr));
    } else {
        npc(c)->setValue(value);
    }
    return c;
}

bool java::util::HashMap::containsKey(::java::lang::Object* key)
{
    return find(key) != nullptr;
}

bool java::util::HashMap::containsValue(::java::lang::Object* value)
{
    if(array != nullptr) {
        for (auto i = int32_t(0); i < npc(array)->length; ++i) {
            for (auto *c = (*array)[i]; c != nullptr; c = npc(c)->next()) {
                if(npc(helper)->equal(value, java_cast< ::java::lang::Object* >(npc(c)->getValue()))) {
                    return true;
                }
            }
        }
    }
    return false;
}

java::lang::Object* java::util::HashMap::get(::java::lang::Object* key)
{
    auto c = find(key);
    return (c == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(c)->getValue()));
}

java::util::HashMap_Cell* java::util::HashMap::removeCell(::java::lang::Object* key)
{
    HashMap_Cell* old = nullptr;
    if(array != nullptr) {
        auto index = npc(helper)->hash(key) & (npc(array)->length - int32_t(1));
        HashMap_Cell* p = nullptr;
        for (auto *c = (*array)[index]; c != nullptr; c = npc(c)->next()) {
            if(npc(helper)->equal(key, java_cast< ::java::lang::Object* >(npc(c)->getKey()))) {
                old = c;
                if(p == nullptr) {
                    array->set(index, npc(c)->next());
                } else {
                    npc(p)->setNext(npc(c)->next());
                }
                --size_;
                break;
            }
            p = c;
        }
        shrink();
    }
    return old;
}

java::lang::Object* java::util::HashMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    auto c = find(key);
    if(c == nullptr) {
        insert(npc(helper)->make(key, value, nullptr));
        return nullptr;
    } else {
        auto old = java_cast< ::java::lang::Object* >(npc(c)->getValue());
        npc(c)->setValue(value);
        return old;
    }
}

void java::util::HashMap::putAll(Map* elts)
{
    for (auto _i = npc(npc(elts)->entrySet())->iterator(); _i->hasNext(); ) {
        Map_Entry* entry = java_cast< Map_Entry* >(_i->next());
        {
            put(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getKey())), static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getValue())));
        }
    }
}

java::lang::Object* java::util::HashMap::remove(::java::lang::Object* key)
{
    auto c = removeCell(java_cast< ::java::lang::Object* >(key));
    return (c == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(c)->getValue()));
}

void java::util::HashMap::clear()
{
    array = nullptr;
    size_ = 0;
}

java::util::Set* java::util::HashMap::entrySet()
{
    return new HashMap_EntrySet(this);
}

java::util::Set* java::util::HashMap::keySet()
{
    return new HashMap_KeySet(this);
}

java::util::Collection* java::util::HashMap::values()
{
    return new HashMap_Values(this);
}

java::util::Iterator* java::util::HashMap::iterator()
{
    return new HashMap_MyIterator(this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap", 17);
    return c;
}

java::lang::Class* java::util::HashMap::getClass0()
{
    return class_();
}

