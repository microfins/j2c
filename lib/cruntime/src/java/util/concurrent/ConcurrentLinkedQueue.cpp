// Generated from /runtime/java/util/concurrent/ConcurrentLinkedQueue.java
#include <java/util/concurrent/ConcurrentLinkedQueue.hpp>

#include <avian/Atomic.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NoSuchFieldException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/concurrent/ConcurrentLinkedQueue_Node.hpp>

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

java::util::concurrent::ConcurrentLinkedQueue::ConcurrentLinkedQueue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::concurrent::ConcurrentLinkedQueue::ConcurrentLinkedQueue()
    : ConcurrentLinkedQueue(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::concurrent::ConcurrentLinkedQueue::ctor()
{
    super::ctor();
    init();
}

void java::util::concurrent::ConcurrentLinkedQueue::init()
{
    head = new ConcurrentLinkedQueue_Node(nullptr, nullptr);
    tail = head.load();
}

int64_t& java::util::concurrent::ConcurrentLinkedQueue::QueueHead()
{
    clinit();
    return QueueHead_;
}
int64_t java::util::concurrent::ConcurrentLinkedQueue::QueueHead_;

int64_t& java::util::concurrent::ConcurrentLinkedQueue::QueueTail()
{
    clinit();
    return QueueTail_;
}
int64_t java::util::concurrent::ConcurrentLinkedQueue::QueueTail_;

int64_t& java::util::concurrent::ConcurrentLinkedQueue::NodeNext()
{
    clinit();
    return NodeNext_;
}
int64_t java::util::concurrent::ConcurrentLinkedQueue::NodeNext_;

void java::util::concurrent::ConcurrentLinkedQueue::clear()
{
    while (java_cast< ::java::lang::Object* >(poll()) != nullptr) {
    }
}

bool java::util::concurrent::ConcurrentLinkedQueue::add(::java::lang::Object* value)
{
    auto n = new ConcurrentLinkedQueue_Node(value, nullptr);
    while (true) {
        auto t = tail.load();
        auto next = npc(tail.load())->next.load();
        if(t == tail.load()) {
            if(next != nullptr) {
                ::avian::Atomic::compareAndSwapObject(this, QueueTail(), t, next);
            } else if(::avian::Atomic::compareAndSwapObject(tail.load(), NodeNext(), nullptr, n)) {
                ::avian::Atomic::compareAndSwapObject(this, QueueTail(), t, n);
                break;
            }
        }
    }
    return true;
}

java::lang::Object* java::util::concurrent::ConcurrentLinkedQueue::peek()
{
    return java_cast< ::java::lang::Object* >(poll(false));
}

java::lang::Object* java::util::concurrent::ConcurrentLinkedQueue::poll()
{
    return java_cast< ::java::lang::Object* >(poll(true));
}

java::lang::Object* java::util::concurrent::ConcurrentLinkedQueue::poll(bool remove)
{
    while (true) {
        auto h = head.load();
        auto t = tail.load();
        auto next = npc(head.load())->next.load();
        if(h == head.load()) {
            if(h == t) {
                if(next != nullptr) {
                    ::avian::Atomic::compareAndSwapObject(this, QueueTail(), t, next);
                } else {
                    return nullptr;
                }
            } else {
                auto value = java_cast< ::java::lang::Object* >(npc(next)->value.load());
                if((!remove) || ::avian::Atomic::compareAndSwapObject(this, QueueHead(), h, next)) {
                    return value;
                }
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::concurrent::ConcurrentLinkedQueue::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.concurrent.ConcurrentLinkedQueue", 42);
    return c;
}

void java::util::concurrent::ConcurrentLinkedQueue::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            try {
                QueueHead() = ::avian::Atomic::getOffset(npc(ConcurrentLinkedQueue::class_())->getField(u"head"_j));
                QueueTail() = ::avian::Atomic::getOffset(npc(ConcurrentLinkedQueue::class_())->getField(u"tail"_j));
                NodeNext() = ::avian::Atomic::getOffset(npc(ConcurrentLinkedQueue_Node::class_())->getField(u"next"_j));
            } catch (::java::lang::NoSuchFieldException* e) {
                throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::concurrent::ConcurrentLinkedQueue::getClass0()
{
    return class_();
}

