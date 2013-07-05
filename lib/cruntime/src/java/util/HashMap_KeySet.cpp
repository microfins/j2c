// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_KeySet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Collections_KeyIterator.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap_MyIterator.hpp>
#include <java/util/HashMap.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::HashMap_KeySet::HashMap_KeySet(HashMap *HashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HashMap_this(HashMap_this)
{
    clinit();
}

java::util::HashMap_KeySet::HashMap_KeySet(HashMap *HashMap_this)
    : HashMap_KeySet(HashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::HashMap_KeySet::size()
{
    return HashMap_this->size();
}

bool java::util::HashMap_KeySet::isEmpty()
{
    return HashMap_this->isEmpty();
}

bool java::util::HashMap_KeySet::contains(::java::lang::Object* key)
{
    return HashMap_this->containsKey(key);
}

bool java::util::HashMap_KeySet::add(::java::lang::Object* key)
{
    return HashMap_this->putCell(key, nullptr) != nullptr;
}

bool java::util::HashMap_KeySet::remove(::java::lang::Object* key)
{
    return HashMap_this->removeCell(key) != nullptr;
}

java::lang::ObjectArray* java::util::HashMap_KeySet::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::HashMap_KeySet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

void java::util::HashMap_KeySet::clear()
{
    HashMap_this->clear();
}

java::util::Iterator* java::util::HashMap_KeySet::iterator()
{
    return new Collections_KeyIterator(new HashMap_MyIterator(HashMap_this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_KeySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.KeySet", 24);
    return c;
}

java::lang::Class* java::util::HashMap_KeySet::getClass0()
{
    return class_();
}

