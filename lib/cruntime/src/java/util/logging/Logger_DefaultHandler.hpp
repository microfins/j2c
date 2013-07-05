// Generated from /runtime/java/util/logging/Logger.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/logging/fwd-runtime.hpp>
#include <java/util/logging/Handler.hpp>

struct default_init_tag;

class java::util::logging::Logger_DefaultHandler
    : public Handler
{

public:
    typedef Handler super;

private:
    static constexpr int32_t NAME_WIDTH { int32_t(14) };
    static constexpr int32_t METHOD_WIDTH { int32_t(15) };
    static constexpr int32_t LEVEL_WIDTH { int32_t(8) };
    ::java::lang::String* newline {  };
protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    virtual void close();
    virtual void flush();

private:
    void maybeLogThrown(::java::lang::StringBuilder* sb, ::java::lang::Throwable* t);
    void indent(::java::lang::StringBuilder* sb, int32_t amount);

public:
    void publish(LogRecord* r) override;

    // Generated
    Logger_DefaultHandler();
protected:
    Logger_DefaultHandler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Logger;
};
