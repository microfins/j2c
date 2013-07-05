// Generated from /runtime/java/lang/Throwable.java
#include <java/lang/Throwable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray > StackTraceElementArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);

java::lang::StackTraceElementArray* java::lang::Throwable::resolveTrace(Object* trace)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::StackTraceElementArray* java::lang::Throwable::resolveTrace(Object* trace)");
    return 0;
}

java::lang::Object* java::lang::Throwable::trace(int32_t skipCount)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::Object* java::lang::Throwable::trace(int32_t skipCount)");
    return 0;
}

