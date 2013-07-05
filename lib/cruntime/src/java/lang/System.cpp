// Generated from /runtime/java/lang/System.java
#include <java/lang/System.hpp>

#include <java/io/BufferedInputStream.hpp>
#include <java/io/BufferedOutputStream.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runtime.hpp>
#include <java/lang/RuntimePermission.hpp>
#include <java/lang/SecurityManager.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System_Property.hpp>
#include <java/util/Hashtable.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <Array.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
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

java::lang::System::System(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::System::System()
    : System(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t& java::lang::System::NanoTimeBaseInMillis()
{
    clinit();
    return NanoTimeBaseInMillis_;
}
int64_t java::lang::System::NanoTimeBaseInMillis_;

java::lang::System_Property*& java::lang::System::properties()
{
    clinit();
    return properties_;
}
java::lang::System_Property* java::lang::System::properties_;

java::util::Map*& java::lang::System::environment()
{
    clinit();
    return environment_;
}
java::util::Map* java::lang::System::environment_;

java::lang::SecurityManager*& java::lang::System::securityManager()
{
    clinit();
    return securityManager_;
}
java::lang::SecurityManager* java::lang::System::securityManager_;

java::io::PrintStream*& java::lang::System::out()
{
    clinit();
    return out_;
}
java::io::PrintStream* java::lang::System::out_;

java::io::PrintStream*& java::lang::System::err()
{
    clinit();
    return err_;
}
java::io::PrintStream* java::lang::System::err_;

java::io::InputStream*& java::lang::System::in()
{
    clinit();
    return in_;
}
java::io::InputStream* java::lang::System::in_;

java::lang::String* java::lang::System::getProperty(String* name)
{
    clinit();
    for (auto *p = System::properties_; p != nullptr; p = npc(p)->next) {
        if(npc(npc(p)->name)->equals(static_cast< Object* >(name))) {
            return npc(p)->value;
        }
    }
    auto found = new ::boolArray(int32_t(1));
    auto value = getProperty(name, found);
    if((*found)[int32_t(0)])
        return value;

    value = getVMProperty(name, found);
    if((*found)[int32_t(0)])
        return value;

    return nullptr;
}

java::lang::String* java::lang::System::getProperty(String* name, String* defaultValue)
{
    clinit();
    auto result = getProperty(name);
    if(result == nullptr) {
        return defaultValue;
    }
    return result;
}

java::lang::String* java::lang::System::setProperty(String* name, String* value)
{
    clinit();
    for (auto *p = System::properties_; p != nullptr; p = npc(p)->next) {
        if(npc(npc(p)->name)->equals(static_cast< Object* >(name))) {
            auto oldValue = npc(p)->value;
            npc(p)->value = value;
            return oldValue;
        }
    }
    properties_ = new System_Property(name, value, properties_);
    return nullptr;
}

java::util::Properties* java::lang::System::getProperties()
{
    clinit();
    auto prop = new ::java::util::Properties();
    for (auto *p = System::properties_; p != nullptr; p = npc(p)->next) {
        npc(prop)->put(static_cast< Object* >(npc(p)->name), static_cast< Object* >(npc(p)->value));
    }
    return prop;
}

int64_t java::lang::System::nanoTime()
{
    clinit();
    return (currentTimeMillis() - NanoTimeBaseInMillis_) * int32_t(1000000);
}

java::lang::String* java::lang::System::mapLibraryName(String* name)
{
    clinit();
    if(name != nullptr) {
        return doMapLibraryName(name);
    } else {
        throw new NullPointerException();
    }
}

void java::lang::System::load(String* path)
{
    clinit();
    npc(Runtime::getRuntime())->load(path);
}

void java::lang::System::loadLibrary(String* name)
{
    clinit();
    npc(Runtime::getRuntime())->loadLibrary(name);
}

void java::lang::System::gc()
{
    clinit();
    npc(Runtime::getRuntime())->gc();
}

void java::lang::System::exit(int32_t code)
{
    clinit();
    npc(Runtime::getRuntime())->exit(code);
}

java::lang::SecurityManager* java::lang::System::getSecurityManager()
{
    clinit();
    return securityManager_;
}

void java::lang::System::setSecurityManager(SecurityManager* securityManager)
{
    clinit();
    System::securityManager_ = securityManager;
}

java::lang::String* java::lang::System::getenv(String* name) /* throws(NullPointerException, SecurityException) */
{
    clinit();
    if(getSecurityManager() != nullptr) {
        npc(getSecurityManager())->checkPermission(new RuntimePermission(::java::lang::StringBuilder().append(u"getenv."_j)->append(name)->toString()));
    }
    return java_cast< String* >(npc(getenv())->get(name));
}

java::util::Map* java::lang::System::getenv() /* throws(SecurityException) */
{
    clinit();
    if(getSecurityManager() != nullptr) {
        npc(getSecurityManager())->checkPermission(new RuntimePermission(u"getenv.*"_j));
    }
    if(environment_ == nullptr) {
        auto vars = getEnvironment();
        environment_ = new ::java::util::Hashtable(npc(vars)->length);
        for(auto var : *npc(vars)) {
            auto equalsIndex = npc(var)->indexOf(static_cast< int32_t >(u'='));
            if(equalsIndex != -int32_t(1) && equalsIndex < npc(var)->length() - int32_t(1)) {
                npc(environment_)->put(npc(var)->substring(0, equalsIndex), npc(var)->substring(equalsIndex + int32_t(1)));
            }
        }
    }
    return environment_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::System::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.System", 16);
    return c;
}

void java::lang::System::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NanoTimeBaseInMillis_ = currentTimeMillis();
        out_ = new ::java::io::PrintStream(new ::java::io::BufferedOutputStream(new ::java::io::FileOutputStream(::java::io::FileDescriptor::out())), true);
        err_ = new ::java::io::PrintStream(new ::java::io::BufferedOutputStream(new ::java::io::FileOutputStream(::java::io::FileDescriptor::err())), true);
        in_ = new ::java::io::BufferedInputStream(new ::java::io::FileInputStream(::java::io::FileDescriptor::in()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::System::getClass0()
{
    return class_();
}

