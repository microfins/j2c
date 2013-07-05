// Generated from /runtime/java/lang/Throwable.java
#include <java/lang/Throwable.hpp>

#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray > StackTraceElementArray;
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

java::lang::Throwable::Throwable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Throwable::Throwable(String* message, Throwable* cause) 
    : Throwable(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::Throwable::Throwable(String* message) 
    : Throwable(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::Throwable::Throwable(Throwable* cause) 
    : Throwable(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::Throwable::Throwable() 
    : Throwable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::Throwable::ctor(String* message, Throwable* cause)
{
    super::ctor();
    this->message = message;
    this->trace_ = trace(1);
    this->cause = cause;
}

void java::lang::Throwable::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::Throwable::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::Throwable::ctor()
{
    ctor(nullptr, nullptr);
}

java::lang::Throwable* java::lang::Throwable::getCause()
{
    return cause;
}

java::lang::Throwable* java::lang::Throwable::initCause(Throwable* e)
{
    if(cause == nullptr) {
        cause = e;
        return this;
    } else {
        throw new IllegalStateException();
    }
}

java::lang::String* java::lang::Throwable::getMessage()
{
    return message;
}

java::lang::String* java::lang::Throwable::getLocalizedMessage()
{
    return getMessage();
}

java::lang::String* java::lang::Throwable::toString()
{
    auto sb = new StringBuilder();
    npc(sb)->append(npc(getClass())->getName());
    if(message != nullptr) {
        npc(npc(sb)->append(u": "_j))->append(message);
    }
    return npc(sb)->toString();
}

java::lang::StackTraceElementArray* java::lang::Throwable::resolveTrace()
{
    if(!(dynamic_cast< StackTraceElementArray* >(trace_) != nullptr)) {
        trace_ = resolveTrace(trace_);
    }
    return java_cast< StackTraceElementArray* >(trace_);
}

java::lang::StackTraceElementArray* java::lang::Throwable::getStackTrace()
{
    return resolveTrace();
}

void java::lang::Throwable::setStackTrace(StackTraceElementArray* trace)
{
    this->trace_ = trace;
}

void java::lang::Throwable::printStackTrace(::java::io::PrintStream* out)
{
    auto sb = new StringBuilder();
    printStackTrace(sb, System::getProperty(u"line.separator"_j));
    npc(out)->print(npc(sb)->toString());
    npc(out)->flush();
}

void java::lang::Throwable::printStackTrace(::java::io::PrintWriter* out)
{
    auto sb = new StringBuilder();
    printStackTrace(sb, System::getProperty(u"line.separator"_j));
    npc(out)->print(npc(sb)->toString());
    npc(out)->flush();
}

void java::lang::Throwable::printStackTrace()
{
    printStackTrace(System::err());
}

void java::lang::Throwable::printStackTrace(StringBuilder* sb, String* nl)
{
    npc(npc(sb)->append(toString()))->append(nl);
    auto trace = resolveTrace();
    for (auto i = int32_t(0); i < npc(trace)->length; ++i) {
        npc(npc(npc(sb)->append(u"  at "_j))->append(npc((*trace)[i])->toString()))->append(nl);
    }
    if(cause != nullptr) {
        npc(sb)->append(u"caused by: "_j);
        npc(cause)->printStackTrace(sb, nl);
    }
}

java::lang::Throwable* java::lang::Throwable::fillInStackTrace()
{
    trace_ = trace(0);
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Throwable::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Throwable", 19);
    return c;
}

java::lang::Class* java::lang::Throwable::getClass0()
{
    return class_();
}

