// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/Array_.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_IteratorEnumeration.hpp>
#include <java/util/Collections_ReverseComparator.hpp>
#include <java/util/Collections_SynchronizedMap.hpp>
#include <java/util/Collections_UnmodifiableList.hpp>
#include <java/util/Collections_UnmodifiableMap.hpp>
#include <java/util/Collections_UnmodifiableSet.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Random.hpp>
#include <java/util/Set.hpp>
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

java::util::Collections::Collections(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections::Collections() 
    : Collections(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::Collections::ctor()
{
    super::ctor();
}

void java::util::Collections::shuffle(List* list, Random* random)
{
    clinit();
    auto array = java_cast< ::java::lang::ObjectArray* >(toArray_(list, new ::java::lang::ObjectArray(npc(list)->size())));
    for (auto i = int32_t(0); i < npc(array)->length; ++i) {
        auto j = npc(random)->nextInt(npc(array)->length);
        auto tmp = (*array)[i];
        array->set(i, (*array)[j]);
        array->set(j, tmp);
    }
    npc(list)->clear();
    for (auto i = int32_t(0); i < npc(array)->length; ++i) {
        npc(list)->add(static_cast< ::java::lang::Object* >((*array)[i]));
    }
}

void java::util::Collections::shuffle(List* list)
{
    clinit();
    shuffle(list, new Random());
}

/* <T> */java::lang::ObjectArray* java::util::Collections::toArray_(Collection* collection, ::java::lang::ObjectArray* array)
{
    clinit();
    auto c = npc(npc(array)->getClass())->getComponentType();
    if(npc(array)->length < npc(collection)->size()) {
        array = java_cast< ::java::lang::ObjectArray* >(::java::lang::reflect::Array_::newInstance(c, npc(collection)->size()));
    }
    auto i = int32_t(0);
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* o = java_cast< ::java::lang::Object* >(_i->next());
        {
            if(npc(c)->isInstance(o)) {
                array->set(i++, java_cast< ::java::lang::Object* >(o));
            } else {
                throw new ::java::lang::ArrayStoreException();
            }
        }
    }
    return array;
}

java::util::List*& java::util::Collections::EMPTY_LIST()
{
    clinit();
    return EMPTY_LIST_;
}
java::util::List* java::util::Collections::EMPTY_LIST_;

/* <E> */java::util::List* java::util::Collections::emptyList()
{
    clinit();
    return EMPTY_LIST_;
}

/* <K, V> */java::util::Map* java::util::Collections::emptyMap()
{
    clinit();
    return java_cast< Map* >(new Collections_UnmodifiableMap(new HashMap(int32_t(0))));
}

/* <T> */java::util::Set* java::util::Collections::emptySet()
{
    clinit();
    return java_cast< Set* >(new Collections_UnmodifiableSet(new HashSet(int32_t(0))));
}

java::lang::String* java::util::Collections::toString(Collection* c)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"["_j);
    for (auto *it = npc(c)->iterator(); npc(it)->hasNext(); ) {
        npc(sb)->append(java_cast< ::java::lang::Object* >(npc(it)->next()));
        if(npc(it)->hasNext()) {
            npc(sb)->append(u","_j);
        }
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

java::lang::String* java::util::Collections::toString(Map* m)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"{"_j);
    for (auto *it = npc(npc(m)->entrySet())->iterator(); npc(it)->hasNext(); ) {
        auto e = java_cast< Map_Entry* >(npc(it)->next());
        npc(npc(npc(sb)->append(java_cast< ::java::lang::Object* >(npc(e)->getKey())))->append(u"="_j))->append(java_cast< ::java::lang::Object* >(npc(e)->getValue()));
        if(npc(it)->hasNext()) {
            npc(sb)->append(u","_j);
        }
    }
    npc(sb)->append(u"}"_j);
    return npc(sb)->toString();
}

/* <T> */java::util::Enumeration* java::util::Collections::enumeration(Collection* c)
{
    clinit();
    return new Collections_IteratorEnumeration(npc(c)->iterator());
}

/* <T> */java::util::Comparator* java::util::Collections::reverseOrder(Comparator* cmp)
{
    clinit();
    return new Collections_ReverseComparator(cmp);
}

/* <K, V> */java::util::Map* java::util::Collections::synchronizedMap(Map* map)
{
    clinit();
    return new Collections_SynchronizedMap(map);
}

/* <T> */java::util::List* java::util::Collections::unmodifiableList(List* list)
{
    clinit();
    return new Collections_UnmodifiableList(list);
}

/* <K, V> */java::util::Map* java::util::Collections::unmodifiableMap(Map* m)
{
    clinit();
    return new Collections_UnmodifiableMap(m);
}

/* <T> */java::util::Set* java::util::Collections::unmodifiableSet(Set* hs)
{
    clinit();
    return new Collections_UnmodifiableSet(hs);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections", 21);
    return c;
}

void java::util::Collections::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_LIST_ = new Collections_UnmodifiableList(new ArrayList(int32_t(0)));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* java::util::Collections::toString()
{
    return super::toString();
}

java::lang::Class* java::util::Collections::getClass0()
{
    return class_();
}

