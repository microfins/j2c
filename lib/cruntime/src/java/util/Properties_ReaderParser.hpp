// Generated from /runtime/java/util/Properties.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Properties_Parser.hpp>

struct default_init_tag;

class java::util::Properties_ReaderParser
    : public Properties_Parser
{

public:
    typedef Properties_Parser super;

public: /* package */
    ::java::io::Reader* in {  };
protected:
    void ctor(::java::io::Reader* in);

public: /* package */
    int32_t readCharacter() /* throws(IOException) */ override;

    // Generated

public:
    Properties_ReaderParser(::java::io::Reader* in);
protected:
    Properties_ReaderParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Properties;
    friend class Properties_Parser;
    friend class Properties_InputStreamParser;
};
