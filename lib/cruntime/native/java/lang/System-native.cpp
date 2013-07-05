// Generated from /runtime/java/lang/System.java
#include <java/lang/System.hpp>

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

void java::lang::System::arraycopy(Object* src, int32_t srcOffset, Object* dst, int32_t dstOffset, int32_t length)
{ /* native */
    clinit();
    unimplemented_(u"void java::lang::System::arraycopy(Object* src, int32_t srcOffset, Object* dst, int32_t dstOffset, int32_t length)");
}

int64_t java::lang::System::currentTimeMillis()
{ /* native */
    clinit();
    unimplemented_(u"int64_t java::lang::System::currentTimeMillis()");
    return 0;
}

java::lang::String* java::lang::System::doMapLibraryName(String* name)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::String* java::lang::System::doMapLibraryName(String* name)");
    return 0;
}

java::lang::StringArray* java::lang::System::getEnvironment()
{ /* native */
    clinit();
}

java::lang::String* java::lang::System::getProperty(String* name, ::boolArray* found)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::String* java::lang::System::getProperty(String* name, ::boolArray* found)");
    return 0;
}

java::lang::String* java::lang::System::getVMProperty(String* name, ::boolArray* found)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::String* java::lang::System::getVMProperty(String* name, ::boolArray* found)");
    return 0;
}

int32_t java::lang::System::identityHashCode(Object* o)
{ /* native */
    clinit();
    unimplemented_(u"int32_t java::lang::System::identityHashCode(Object* o)");
    return 0;
}

