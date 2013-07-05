// Generated from /runtime/java/nio/channels/Selector.java
#include <java/nio/channels/Selector.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/nio/channels/SelectionKey.hpp>
#include <java/nio/channels/SocketSelector.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::Selector::Selector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Selector::Selector()
    : Selector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::Selector::ctor()
{
    super::ctor();
    init();
}

void java::nio::channels::Selector::init()
{
    keys_ = new ::java::util::HashSet();
    selectedKeys_ = new ::java::util::HashSet();
}

java::nio::channels::Selector* java::nio::channels::Selector::open() /* throws(IOException) */
{
    clinit();
    return new SocketSelector();
}

void java::nio::channels::Selector::add(SelectionKey* key)
{
    npc(keys_)->add(key);
}

void java::nio::channels::Selector::remove(SelectionKey* key)
{
    npc(keys_)->remove(key);
}

java::util::Set* java::nio::channels::Selector::keys()
{
    return keys_;
}

java::util::Set* java::nio::channels::Selector::selectedKeys()
{
    return selectedKeys_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Selector::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Selector", 26);
    return c;
}

java::lang::Class* java::nio::channels::Selector::getClass0()
{
    return class_();
}

