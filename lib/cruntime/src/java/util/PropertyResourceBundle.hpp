// Generated from /runtime/java/util/PropertyResourceBundle.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/ResourceBundle.hpp>

struct default_init_tag;

class java::util::PropertyResourceBundle
    : public ResourceBundle
{

public:
    typedef ResourceBundle super;

private:
    Properties* map {  };
protected:
    void ctor(::java::io::InputStream* in) /* throws(IOException) */;

public:
    ::java::lang::Object* handleGetObject(::java::lang::String* key) override;
    Enumeration* getKeys() override;

    // Generated
    PropertyResourceBundle(::java::io::InputStream* in);
protected:
    PropertyResourceBundle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
