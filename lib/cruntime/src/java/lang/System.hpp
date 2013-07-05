// Generated from /runtime/java/lang/System.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class java::lang::System
    : public virtual Object
{

public:
    typedef Object super;

private:
    static int64_t NanoTimeBaseInMillis_;
    static System_Property* properties_;
    static ::java::util::Map* environment_;
    static SecurityManager* securityManager_;
    static ::java::io::PrintStream* out_;
    static ::java::io::PrintStream* err_;
    static ::java::io::InputStream* in_;

public:
    static void arraycopy(Object* src, int32_t srcOffset, Object* dst, int32_t dstOffset, int32_t length);
    static String* getProperty(String* name);
    static String* getProperty(String* name, String* defaultValue);
    static String* setProperty(String* name, String* value);
    static ::java::util::Properties* getProperties();

private:
    static String* getProperty(String* name, ::boolArray* found);
    static String* getVMProperty(String* name, ::boolArray* found);

public:
    static int64_t currentTimeMillis();
    static int32_t identityHashCode(Object* o);
    static int64_t nanoTime();
    static String* mapLibraryName(String* name);

private:
    static String* doMapLibraryName(String* name);

public:
    static void load(String* path);
    static void loadLibrary(String* name);
    static void gc();
    static void exit(int32_t code);
    static SecurityManager* getSecurityManager();
    static void setSecurityManager(SecurityManager* securityManager);
    static String* getenv(String* name) /* throws(NullPointerException, SecurityException) */;
    static ::java::util::Map* getenv() /* throws(SecurityException) */;

private:
    static StringArray* getEnvironment();

    // Generated

public:
    System();
protected:
    System(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static int64_t& NanoTimeBaseInMillis();
    static System_Property*& properties();
    static ::java::util::Map*& environment();
    static SecurityManager*& securityManager();

public:
    static ::java::io::PrintStream*& out();
    static ::java::io::PrintStream*& err();
    static ::java::io::InputStream*& in();

private:
    virtual ::java::lang::Class* getClass0();
    friend class System_Property;
};
