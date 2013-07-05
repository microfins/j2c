// Generated from /runtime/java/util/ResourceBundle.java
#include <java/util/ResourceBundle.hpp>

#include <avian/VMClass.hpp>
#include <avian/VMMethod.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NoSuchMethodException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/util/Locale.hpp>
#include <java/util/MissingResourceException.hpp>
#include <java/util/PropertyResourceBundle.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::lang::reflect::AnnotatedElementArray, ::java::lang::reflect::TypeArray > ClassArray;
    } // lang
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
java::util::ResourceBundle::ResourceBundle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::ResourceBundle::ResourceBundle()
    : ResourceBundle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* java::util::ResourceBundle::replace(char16_t a, char16_t b, ::java::lang::String* s)
{
    clinit();
    auto array = new ::char16_tArray(npc(s)->length());
    for (auto i = int32_t(0); i < npc(array)->length; ++i) {
        auto c = npc(s)->charAt(i);
        (*array)[i] = (c == a ? b : c);
    }
    return new ::java::lang::String(array, int32_t(0), npc(array)->length, false);
}

java::util::ResourceBundle* java::util::ResourceBundle::findProperties(::java::lang::String* name, ::java::lang::ClassLoader* loader, ResourceBundle* parent) /* throws(IOException) */
{
    clinit();
    auto in = npc(loader)->getResourceAsStream(::java::lang::StringBuilder().append(replace(u'.', u'/', name))->append(u".properties"_j)->toString());
    if(in != nullptr) {
        {
            auto finally0 = finally([&] {
                npc(in)->close();
            });
            {
                ResourceBundle* r = new PropertyResourceBundle(in);
                npc(r)->name = name;
                npc(r)->parent = parent;
                return r;
            }
        }

    } else {
        return nullptr;
    }
}

java::util::ResourceBundle* java::util::ResourceBundle::find(::java::lang::String* name, ::java::lang::ClassLoader* loader, ResourceBundle* parent) /* throws(Exception) */
{
    clinit();
    try {
        auto c = ::java::lang::Class::forName(name, true, loader);
        if(npc(c)->isAssignableFrom(ResourceBundle::class_())) {
            return java_cast< ResourceBundle* >(java_cast< ::java::lang::Object* >(npc(npc(c)->getConstructor(new ::java::lang::ClassArray()))->newInstance(new ::java::lang::ObjectArray())));
        }
    } catch (::java::lang::ClassNotFoundException* ok) {
    } catch (::java::lang::NoSuchMethodException* ok) {
    }
    return findProperties(name, loader, parent);
}

java::util::ResourceBundle* java::util::ResourceBundle::getBundle(::java::lang::String* name, Locale* locale, ::java::lang::ClassLoader* loader)
{
    clinit();
    try {
        auto b = find(name, loader, nullptr);
        if(npc(locale)->getLanguage() != nullptr) {
            name = ::java::lang::StringBuilder().append(name)->append(u"_"_j)
                ->append(npc(locale)->getLanguage())->toString();
            auto b2 = find(name, loader, b);
            if(b2 != nullptr)
                b = b2;

            if(npc(locale)->getCountry() != nullptr) {
                name = ::java::lang::StringBuilder().append(name)->append(u"_"_j)
                    ->append(npc(locale)->getCountry())->toString();
                b2 = find(name, loader, b);
                if(b2 != nullptr)
                    b = b2;

                if(npc(locale)->getVariant() != nullptr) {
                    name = ::java::lang::StringBuilder().append(name)->append(u"_"_j)
                        ->append(npc(locale)->getVariant())->toString();
                    b2 = find(name, loader, b);
                    if(b2 != nullptr)
                        b = b2;

                }
            }
        }
        return b;
    } catch (::java::lang::Exception* e) {
        ::java::lang::RuntimeException* re = new MissingResourceException(name, name, nullptr);
        npc(re)->initCause(e);
        throw re;
    }
}

java::util::ResourceBundle* java::util::ResourceBundle::getBundle(::java::lang::String* name, Locale* locale)
{
    clinit();
    return getBundle(name, locale, npc(npc(::java::lang::reflect::Method::getCaller())->class__)->loader);
}

java::util::ResourceBundle* java::util::ResourceBundle::getBundle(::java::lang::String* name)
{
    clinit();
    return getBundle(name, Locale::getDefault(), npc(npc(::java::lang::reflect::Method::getCaller())->class__)->loader);
}

java::lang::Object* java::util::ResourceBundle::getObject(::java::lang::String* key)
{
    for (auto *b = this; b != nullptr; b = npc(b)->parent) {
        auto value = npc(b)->handleGetObject(key);
        if(value != nullptr) {
            return value;
        }
    }
    throw new MissingResourceException(key, name, key);
}

java::lang::String* java::util::ResourceBundle::getString(::java::lang::String* key)
{
    return java_cast< ::java::lang::String* >(getObject(key));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::ResourceBundle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.ResourceBundle", 24);
    return c;
}

java::lang::Class* java::util::ResourceBundle::getClass0()
{
    return class_();
}

