// Generated from /runtime/java/util/Properties.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Properties_Parser
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::StringBuilder* key {  };
    ::java::lang::StringBuilder* value {  };
    ::java::lang::StringBuilder* current {  };
    void append(int32_t c);
    void finishLine(Map* map);

public: /* package */
    virtual int32_t readCharacter() /* throws(IOException) */ = 0;
    virtual char16_t readUtf16() /* throws(IOException) */;
    virtual void parse(Map* map) /* throws(IOException) */;

    // Generated

public:
    Properties_Parser();
protected:
    void ctor();
    Properties_Parser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class Properties;
    friend class Properties_InputStreamParser;
    friend class Properties_ReaderParser;
};
