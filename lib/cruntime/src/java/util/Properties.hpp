// Generated from /runtime/java/util/Properties.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Hashtable.hpp>

struct default_init_tag;

class java::util::Properties
    : public Hashtable
{

public:
    typedef Hashtable super;
    virtual void load(::java::io::InputStream* in) /* throws(IOException) */;
    virtual void load(::java::io::Reader* reader) /* throws(IOException) */;
    virtual void store(::java::io::OutputStream* out, ::java::lang::String* comment) /* throws(IOException) */;
    virtual ::java::lang::String* getProperty(::java::lang::String* key);
    virtual ::java::lang::String* getProperty(::java::lang::String* key, ::java::lang::String* defaultValue);
    virtual ::java::lang::Object* setProperty(::java::lang::String* key, ::java::lang::String* value);
    virtual Enumeration* propertyNames();

    // Generated
    Properties();
protected:
    Properties(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Properties_Parser;
    friend class Properties_InputStreamParser;
    friend class Properties_ReaderParser;
};
