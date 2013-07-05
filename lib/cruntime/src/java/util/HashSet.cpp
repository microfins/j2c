// Generated from /runtime/java/util/HashSet.java
#include <java/util/HashSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet_MyIterator.hpp>
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

java::util::HashSet::HashSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashSet::HashSet(Collection* c) 
    : HashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

java::util::HashSet::HashSet(int32_t capacity) 
    : HashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::HashSet::HashSet() 
    : HashSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object*& java::util::HashSet::Value()
{
    clinit();
    return Value_;
}
java::lang::Object* java::util::HashSet::Value_;

void java::util::HashSet::ctor(Collection* c)
{
    super::ctor();
    map = new HashMap(npc(c)->size());
    addAll(static_cast< Collection* >(c));
}

void java::util::HashSet::ctor(int32_t capacity)
{
    super::ctor();
    map = new HashMap(capacity);
}

void java::util::HashSet::ctor()
{
    ctor(int32_t(0));
}

int32_t java::util::HashSet::size()
{
    return npc(map)->size();
}

bool java::util::HashSet::isEmpty()
{
    return npc(map)->isEmpty();
}

bool java::util::HashSet::contains(::java::lang::Object* element)
{
    return npc(map)->containsKey(element);
}

bool java::util::HashSet::add(::java::lang::Object* element)
{
    return java_cast< ::java::lang::Object* >(npc(map)->put(static_cast< ::java::lang::Object* >(element), static_cast< ::java::lang::Object* >(Value()))) != Value();
}

bool java::util::HashSet::addAll(Collection* collection)
{
    auto change = false;
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* t = java_cast< ::java::lang::Object* >(_i->next());
        
                        if(add(t))
                change = true;


    }
    return change;
}

bool java::util::HashSet::remove(::java::lang::Object* element)
{
    return java_cast< ::java::lang::Object* >(npc(map)->remove(element)) != Value();
}

void java::util::HashSet::clear()
{
    npc(map)->clear();
}

java::util::Iterator* java::util::HashSet::iterator()
{
    return new HashSet_MyIterator(npc(map)->iterator());
}

java::lang::String* java::util::HashSet::toString()
{
    return Collections::toString(static_cast< Collection* >(this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashSet", 17);
    return c;
}

void java::util::HashSet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Value_ = new ::java::lang::Object();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

bool java::util::HashSet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::HashSet::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::HashSet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::HashSet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

java::lang::Class* java::util::HashSet::getClass0()
{
    return class_();
}

