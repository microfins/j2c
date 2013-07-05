// Generated from /runtime/java/util/ArrayList.java
#include <java/util/ArrayList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_ArrayListIterator.hpp>
#include <java/util/Collections.hpp>
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

java::util::ArrayList::ArrayList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::ArrayList::ArrayList(int32_t capacity) 
    : ArrayList(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::ArrayList::ArrayList() 
    : ArrayList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::ArrayList::ArrayList(Collection* source) 
    : ArrayList(*static_cast< ::default_init_tag* >(0))
{
    ctor(source);
}

constexpr int32_t java::util::ArrayList::MinimumCapacity;

void java::util::ArrayList::ctor(int32_t capacity)
{
    super::ctor();
    resize(capacity);
}

void java::util::ArrayList::ctor()
{
    ctor(int32_t(0));
}

void java::util::ArrayList::ctor(Collection* source)
{
    ctor(npc(source)->size());
    addAll(static_cast< Collection* >(source));
}

void java::util::ArrayList::grow(int32_t newSize)
{
    if(array == nullptr || newSize > npc(array)->length) {
        resize(::java::lang::Math::max(newSize, array == nullptr ? MinimumCapacity : npc(array)->length * int32_t(2)));
    }
}

void java::util::ArrayList::shrink(int32_t newSize)
{
    if(npc(array)->length / int32_t(2) >= MinimumCapacity && newSize <= npc(array)->length / int32_t(3)) {
        resize(npc(array)->length / int32_t(2));
    }
}

void java::util::ArrayList::resize(int32_t capacity)
{
    ::java::lang::ObjectArray* newArray_ = nullptr;
    if(capacity != 0) {
        if(array != nullptr && npc(array)->length == capacity) {
            return;
        }
        newArray_ = new ::java::lang::ObjectArray(capacity);
        if(array != nullptr) {
            ::java::lang::System::arraycopy(array, 0, newArray_, 0, size_);
        }
    }
    array = newArray_;
}

bool java::util::ArrayList::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    clinit();
    return (a == nullptr && b == nullptr) || (a != nullptr && npc(a)->equals(b));
}

int32_t java::util::ArrayList::size()
{
    return size_;
}

bool java::util::ArrayList::contains(::java::lang::Object* element)
{
    for (auto i = int32_t(0); i < size_; ++i) {
        if(equal(element, (*array)[i])) {
            return true;
        }
    }
    return false;
}

void java::util::ArrayList::add(int32_t index, ::java::lang::Object* element)
{
    auto newSize = ::java::lang::Math::max(size_ + int32_t(1), index + int32_t(1));
    grow(newSize);
    size_ = newSize;
    ::java::lang::System::arraycopy(array, index, array, index + int32_t(1), size_ - index - int32_t(1));
    array->set(index, element);
}

bool java::util::ArrayList::add(::java::lang::Object* element)
{
    add(size_, element);
    return true;
}

bool java::util::ArrayList::addAll(Collection* collection)
{
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* t = java_cast< ::java::lang::Object* >(_i->next());
        
                        add(t);

    }
    return true;
}

int32_t java::util::ArrayList::indexOf(::java::lang::Object* element)
{
    for (auto i = int32_t(0); i < size_; ++i) {
        if(equal(element, (*array)[i])) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::util::ArrayList::lastIndexOf(::java::lang::Object* element)
{
    for (auto i = size_ - int32_t(1); i >= 0; --i) {
        if(equal(element, (*array)[i])) {
            return i;
        }
    }
    return -int32_t(1);
}

java::lang::Object* java::util::ArrayList::get(int32_t index)
{
    if(index >= 0 && index < size_) {
        return java_cast< ::java::lang::Object* >((*array)[index]);
    } else {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(index)->append(u" not in [0, "_j)
            ->append(size_)
            ->append(u")"_j)->toString());
    }
}

java::lang::Object* java::util::ArrayList::set(int32_t index, ::java::lang::Object* element)
{
    if(index >= 0 && index < size_) {
        auto oldValue = (*array)[index];
        array->set(index, element);
        return java_cast< ::java::lang::Object* >(oldValue);
    } else {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(index)->append(u" not in [0, "_j)
            ->append(size_)
            ->append(u")"_j)->toString());
    }
}

java::lang::Object* java::util::ArrayList::remove(int32_t index)
{
    auto v = java_cast< ::java::lang::Object* >(get(index));
    auto newSize = size_ - int32_t(1);
    if(index == newSize) {
        array->set(index, nullptr);
    } else {
        ::java::lang::System::arraycopy(array, index + int32_t(1), array, index, newSize - index);
    }
    shrink(newSize);
    size_ = newSize;
    return v;
}

bool java::util::ArrayList::remove(::java::lang::Object* element)
{
    for (auto i = int32_t(0); i < size_; ++i) {
        if(equal(element, (*array)[i])) {
            remove(i);
            return true;
        }
    }
    return false;
}

bool java::util::ArrayList::isEmpty()
{
    return size() == 0;
}

void java::util::ArrayList::clear()
{
    array = nullptr;
    size_ = 0;
}

java::util::Iterator* java::util::ArrayList::iterator()
{
    return listIterator();
}

java::util::ListIterator* java::util::ArrayList::listIterator(int32_t index)
{
    return new Collections_ArrayListIterator(this, index);
}

java::util::ListIterator* java::util::ArrayList::listIterator()
{
    return listIterator(int32_t(0));
}

java::lang::String* java::util::ArrayList::toString()
{
    return Collections::toString(static_cast< Collection* >(this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::ArrayList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.ArrayList", 19);
    return c;
}

bool java::util::ArrayList::addAll(int32_t startIndex, Collection* c)
{
    return super::addAll(startIndex, c);
}

java::lang::Class* java::util::ArrayList::getClass0()
{
    return class_();
}

