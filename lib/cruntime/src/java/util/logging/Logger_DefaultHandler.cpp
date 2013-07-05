// Generated from /runtime/java/util/logging/Logger.java
#include <java/util/logging/Logger_DefaultHandler.hpp>

#include <java/io/PrintStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/logging/Level.hpp>
#include <java/util/logging/LogRecord.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::logging::Logger_DefaultHandler::Logger_DefaultHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Logger_DefaultHandler::Logger_DefaultHandler() 
    : Logger_DefaultHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::util::logging::Logger_DefaultHandler::NAME_WIDTH;

constexpr int32_t java::util::logging::Logger_DefaultHandler::METHOD_WIDTH;

constexpr int32_t java::util::logging::Logger_DefaultHandler::LEVEL_WIDTH;

void java::util::logging::Logger_DefaultHandler::ctor()
{
    super::ctor();
    newline = ::java::lang::System::getProperty(u"line.separator"_j);
}

java::lang::Object* java::util::logging::Logger_DefaultHandler::clone()
{
    return this;
}

void java::util::logging::Logger_DefaultHandler::close()
{
}

void java::util::logging::Logger_DefaultHandler::flush()
{
}

void java::util::logging::Logger_DefaultHandler::maybeLogThrown(::java::lang::StringBuilder* sb, ::java::lang::Throwable* t)
{
    if(t != nullptr) {
        npc(sb)->append(u"\nCaused by: "_j);
        npc(sb)->append(npc(npc(t)->getClass())->getName());
        npc(sb)->append(u": "_j);
        npc(sb)->append(npc(t)->getMessage());
        npc(sb)->append(newline);
        for(auto elt : *npc(npc(t)->getStackTrace())) {
            npc(sb)->append(u'\u0009');
            npc(sb)->append(npc(elt)->getClassName());
            npc(sb)->append(u'.');
            npc(sb)->append(npc(elt)->getMethodName());
            npc(sb)->append(u"(line"_j);
            npc(sb)->append(u':');
            auto lineNumber = npc(elt)->getLineNumber();
            if(lineNumber == -int32_t(2)) {
                npc(sb)->append(u"unknown"_j);
            } else if(lineNumber == -int32_t(1)) {
                npc(sb)->append(u"native"_j);
            } else {
                npc(sb)->append(lineNumber);
            }
            npc(sb)->append(u')');
            npc(sb)->append(newline);
        }
        maybeLogThrown(sb, npc(t)->getCause());
    }
}

void java::util::logging::Logger_DefaultHandler::indent(::java::lang::StringBuilder* sb, int32_t amount)
{
    do {
        npc(sb)->append(u' ');
    } while (--amount > 0);
}

void java::util::logging::Logger_DefaultHandler::publish(LogRecord* r)
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(npc(r)->getLoggerName());
    indent(sb, NAME_WIDTH - npc(npc(r)->getLoggerName())->length());
    npc(sb)->append(npc(r)->getSourceMethodName());
    indent(sb, METHOD_WIDTH - npc(npc(r)->getSourceMethodName())->length());
    npc(sb)->append(npc(npc(r)->getLevel())->getName());
    indent(sb, LEVEL_WIDTH - npc(npc(npc(r)->getLevel())->getName())->length());
    npc(sb)->append(npc(r)->getMessage());
    maybeLogThrown(sb, npc(r)->getThrown());
    npc(::java::lang::System::out())->println(npc(sb)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Logger_DefaultHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Logger.DefaultHandler", 39);
    return c;
}

java::lang::Class* java::util::logging::Logger_DefaultHandler::getClass0()
{
    return class_();
}

