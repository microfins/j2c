// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_MyEnumeration.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipFile_EntryFactory.hpp>
#include <java/util/zip/ZipFile_Window.hpp>

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

java::util::zip::ZipFile_MyEnumeration::ZipFile_MyEnumeration(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile_MyEnumeration::ZipFile_MyEnumeration(ZipFile_EntryFactory* factory, ZipFile_Window* window, ::java::util::Iterator* iterator) 
    : ZipFile_MyEnumeration(*static_cast< ::default_init_tag* >(0))
{
    ctor(factory,window,iterator);
}

void java::util::zip::ZipFile_MyEnumeration::ctor(ZipFile_EntryFactory* factory, ZipFile_Window* window, ::java::util::Iterator* iterator)
{
    super::ctor();
    this->factory = factory;
    this->window = window;
    this->iterator = iterator;
}

bool java::util::zip::ZipFile_MyEnumeration::hasMoreElements()
{
    return npc(iterator)->hasNext();
}

java::util::zip::ZipEntry* java::util::zip::ZipFile_MyEnumeration::nextElement()
{
    return npc(factory)->makeEntry(window, (npc(java_cast< ::java::lang::Integer* >(npc(iterator)->next())))->intValue());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_MyEnumeration::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile.MyEnumeration", 35);
    return c;
}

java::lang::Class* java::util::zip::ZipFile_MyEnumeration::getClass0()
{
    return class_();
}

