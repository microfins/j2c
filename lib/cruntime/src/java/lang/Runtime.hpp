// Generated from /runtime/java/lang/Runtime.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
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

class java::lang::Runtime
    : public virtual Object
{

public:
    typedef Object super;

private:
    static Runtime* instance_;
protected:
    void ctor();

public:
    static Runtime* getRuntime();
    virtual void load(String* path);
    virtual void loadLibrary(String* path);
    virtual Process* exec(String* command) /* throws(IOException) */;
    virtual Process* exec(StringArray* command) /* throws(IOException) */;
    virtual void addShutdownHook(Thread* t);

private:
    static void exec(StringArray* command, ::int64_tArray* process) /* throws(IOException) */;
    static int32_t waitFor(int64_t pid, int64_t tid);
    static void load(String* name, bool mapName);
    static void kill(int64_t pid);

public:
    virtual void gc();
    virtual void exit(int32_t code);
    virtual int64_t freeMemory();
    virtual int64_t totalMemory();

    // Generated

private:
    Runtime();
protected:
    Runtime(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static Runtime*& instance();
    virtual ::java::lang::Class* getClass0();
    friend class Runtime_exec_1;
    friend class Runtime_MyProcess;
};
