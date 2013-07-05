// Generated from /runtime/java/lang/Runtime.java
#include <java/lang/Runtime.hpp>

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

extern void unimplemented_(const char16_t* name);

void java::lang::Runtime::addShutdownHook(Thread* t)
{ /* native */
    unimplemented_(u"void java::lang::Runtime::addShutdownHook(Thread* t)");
}

void java::lang::Runtime::exec(StringArray* command, ::int64_tArray* process)
{ /* native */
    clinit();
    unimplemented_(u"void java::lang::Runtime::exec(StringArray* command, ::int64_tArray* process)");
}

void java::lang::Runtime::exit(int32_t code)
{ /* native */
    unimplemented_(u"void java::lang::Runtime::exit(int32_t code)");
}

int64_t java::lang::Runtime::freeMemory()
{ /* native */
    unimplemented_(u"int64_t java::lang::Runtime::freeMemory()");
    return 0;
}

void java::lang::Runtime::gc()
{ /* native */
    unimplemented_(u"void java::lang::Runtime::gc()");
}

void java::lang::Runtime::kill(int64_t pid)
{ /* native */
    clinit();
    unimplemented_(u"void java::lang::Runtime::kill(int64_t pid)");
}

void java::lang::Runtime::load(String* name, bool mapName)
{ /* native */
    clinit();
    unimplemented_(u"void java::lang::Runtime::load(String* name, bool mapName)");
}

int64_t java::lang::Runtime::totalMemory()
{ /* native */
    unimplemented_(u"int64_t java::lang::Runtime::totalMemory()");
    return 0;
}

int32_t java::lang::Runtime::waitFor(int64_t pid, int64_t tid)
{ /* native */
    clinit();
    unimplemented_(u"int32_t java::lang::Runtime::waitFor(int64_t pid, int64_t tid)");
    return 0;
}

