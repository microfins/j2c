// Generated from /runtime/java/util/logging/LogRecord.java
#include <java/util/logging/LogRecord.hpp>

#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/logging/Level.hpp>

java::util::logging::LogRecord::LogRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::LogRecord::LogRecord(::java::lang::String* loggerName, ::java::lang::String* methodName, Level* level, ::java::lang::String* message, ::java::lang::Throwable* thrown) 
    : LogRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(loggerName,methodName,level,message,thrown);
}

void java::util::logging::LogRecord::ctor(::java::lang::String* loggerName, ::java::lang::String* methodName, Level* level, ::java::lang::String* message, ::java::lang::Throwable* thrown)
{
    super::ctor();
    this->loggerName = loggerName;
    this->message = message;
    this->thrown = thrown;
    this->level = level;
    this->methodName = methodName;
}

java::lang::String* java::util::logging::LogRecord::getLoggerName()
{
    return loggerName;
}

java::lang::String* java::util::logging::LogRecord::getMessage()
{
    return message;
}

java::lang::Throwable* java::util::logging::LogRecord::getThrown()
{
    return thrown;
}

java::util::logging::Level* java::util::logging::LogRecord::getLevel()
{
    return level;
}

java::lang::String* java::util::logging::LogRecord::getSourceMethodName()
{
    return methodName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::LogRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.LogRecord", 27);
    return c;
}

java::lang::Class* java::util::logging::LogRecord::getClass0()
{
    return class_();
}

