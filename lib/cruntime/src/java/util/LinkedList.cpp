// Generated from /runtime/java/util/LinkedList.java
#include <java/util/LinkedList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList_Cell.hpp>
#include <java/util/LinkedList_MyIterator.hpp>
#include <java/util/ListIterator.hpp>
#include <java/util/NoSuchElementException.hpp>

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

java::util::LinkedList::LinkedList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedList::LinkedList(Collection* c) 
    : LinkedList(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

java::util::LinkedList::LinkedList() 
    : LinkedList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::LinkedList::ctor(Collection* c)
{
    super::ctor();
    addAll(static_cast< Collection* >(c));
}

void java::util::LinkedList::ctor()
{
    super::ctor();
}

java::util::LinkedList_Cell* java::util::LinkedList::find(int32_t index)
{
    auto i = int32_t(0);
    for (auto *c = front; c != nullptr; c = npc(c)->next) {
        if(i == index) {
            return c;
        }
        ++i;
    }
    throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(index)->append(u" not in [0, "_j)
        ->append(size_)
        ->append(u")"_j)->toString());
}

bool java::util::LinkedList::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    clinit();
    return (a == nullptr && b == nullptr) || (a != nullptr && npc(a)->equals(b));
}

void java::util::LinkedList::addFirst(LinkedList_Cell* c)
{
    ++size_;
    if(front == nullptr) {
        front = rear = c;
    } else {
        npc(c)->next = front;
        npc(front)->prev = c;
        front = c;
    }
}

void java::util::LinkedList::addLast(LinkedList_Cell* c)
{
    ++size_;
    if(front == nullptr) {
        front = rear = c;
    } else {
        npc(c)->prev = rear;
        npc(rear)->next = c;
        rear = c;
    }
}

java::util::LinkedList_Cell* java::util::LinkedList::find(::java::lang::Object* element)
{
    for (auto *c = front; c != nullptr; c = npc(c)->next) {
        if(equal(java_cast< ::java::lang::Object* >(npc(c)->value), element)) {
            return c;
        }
    }
    return nullptr;
}

void java::util::LinkedList::remove(LinkedList_Cell* c)
{
    --size_;
    if(npc(c)->prev == nullptr) {
        front = npc(c)->next;
    } else {
        npc(npc(c)->prev)->next = npc(c)->next;
    }
    if(npc(c)->next == nullptr) {
        rear = npc(c)->prev;
    } else {
        npc(npc(c)->next)->prev = npc(c)->prev;
    }
}

int32_t java::util::LinkedList::size()
{
    return size_;
}

bool java::util::LinkedList::contains(::java::lang::Object* element)
{
    return find(element) != nullptr;
}

int32_t java::util::LinkedList::indexOf(::java::lang::Object* element)
{
    auto i = int32_t(0);
    for (auto *c = front; c != nullptr; c = npc(c)->next) {
        if(equal(java_cast< ::java::lang::Object* >(npc(c)->value), element)) {
            return i;
        }
        ++i;
    }
    return -int32_t(1);
}

int32_t java::util::LinkedList::lastIndexOf(::java::lang::Object* element)
{
    auto i = size_;
    for (auto *c = rear; c != nullptr; c = npc(c)->prev) {
        --i;
        if(equal(java_cast< ::java::lang::Object* >(npc(c)->value), element)) {
            return i;
        }
    }
    return -int32_t(1);
}

bool java::util::LinkedList::add(::java::lang::Object* element)
{
    addLast(element);
    return true;
}

bool java::util::LinkedList::addAll(Collection* collection)
{
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* t = java_cast< ::java::lang::Object* >(_i->next());
        
                        add(t);

    }
    return true;
}

void java::util::LinkedList::add(int32_t index, ::java::lang::Object* element)
{
    if(index == 0) {
        addFirst(element);
    } else {
        auto cell = find(index);
        auto newCell = new LinkedList_Cell(element, npc(cell)->prev, cell);
        npc(npc(cell)->prev)->next = newCell;
    }
}

void java::util::LinkedList::addFirst(::java::lang::Object* element)
{
    addFirst(static_cast< LinkedList_Cell* >(new LinkedList_Cell(element, nullptr, nullptr)));
}

void java::util::LinkedList::addLast(::java::lang::Object* element)
{
    addLast(static_cast< LinkedList_Cell* >(new LinkedList_Cell(element, nullptr, nullptr)));
}

java::lang::Object* java::util::LinkedList::get(int32_t index)
{
    return java_cast< ::java::lang::Object* >(npc(find(index))->value);
}

java::lang::Object* java::util::LinkedList::set(int32_t index, ::java::lang::Object* value)
{
    auto c = find(index);
    auto old = java_cast< ::java::lang::Object* >(npc(c)->value);
    npc(c)->value = value;
    return old;
}

java::lang::Object* java::util::LinkedList::getFirst()
{
    if(front != nullptr) {
        return java_cast< ::java::lang::Object* >(npc(front)->value);
    } else {
        throw new NoSuchElementException();
    }
}

java::lang::Object* java::util::LinkedList::getLast()
{
    if(rear != nullptr) {
        return java_cast< ::java::lang::Object* >(npc(rear)->value);
    } else {
        throw new NoSuchElementException();
    }
}

java::lang::Object* java::util::LinkedList::remove(int32_t index)
{
    auto c = find(index);
    remove(c);
    return java_cast< ::java::lang::Object* >(npc(c)->value);
}

bool java::util::LinkedList::isEmpty()
{
    return size() == 0;
}

java::lang::Object* java::util::LinkedList::removeFirst()
{
    if(front != nullptr) {
        auto v = java_cast< ::java::lang::Object* >(npc(front)->value);
        remove(front);
        return v;
    } else {
        throw new NoSuchElementException();
    }
}

java::lang::Object* java::util::LinkedList::removeLast()
{
    if(rear != nullptr) {
        auto v = java_cast< ::java::lang::Object* >(npc(rear)->value);
        remove(rear);
        return v;
    } else {
        throw new NoSuchElementException();
    }
}

bool java::util::LinkedList::remove(::java::lang::Object* element)
{
    auto c = find(element);
    if(c == nullptr) {
        return false;
    } else {
        remove(c);
        return true;
    }
}

void java::util::LinkedList::clear()
{
    front = rear = nullptr;
    size_ = 0;
}

java::util::Iterator* java::util::LinkedList::iterator()
{
    return listIterator();
}

java::util::ListIterator* java::util::LinkedList::listIterator(int32_t index)
{
    auto it = new LinkedList_MyIterator(this);
    for (auto i = int32_t(0); i < index; ++i) {
        npc(it)->next();
    }
    return it;
}

java::util::ListIterator* java::util::LinkedList::listIterator()
{
    return listIterator(int32_t(0));
}

java::lang::String* java::util::LinkedList::toString()
{
    return Collections::toString(static_cast< Collection* >(this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList", 20);
    return c;
}

bool java::util::LinkedList::addAll(int32_t startIndex, Collection* c)
{
    return super::addAll(startIndex, c);
}

java::lang::Class* java::util::LinkedList::getClass0()
{
    return class_();
}

