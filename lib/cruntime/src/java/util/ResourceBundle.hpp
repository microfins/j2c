// Generated from /runtime/java/util/ResourceBundle.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::ResourceBundle
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* name {  };
    ResourceBundle* parent {  };

private:
    static ::java::lang::String* replace(char16_t a, char16_t b, ::java::lang::String* s);
    static ResourceBundle* findProperties(::java::lang::String* name, ::java::lang::ClassLoader* loader, ResourceBundle* parent) /* throws(IOException) */;
    static ResourceBundle* find(::java::lang::String* name, ::java::lang::ClassLoader* loader, ResourceBundle* parent) /* throws(Exception) */;

public:
    static ResourceBundle* getBundle(::java::lang::String* name, Locale* locale, ::java::lang::ClassLoader* loader);
    static ResourceBundle* getBundle(::java::lang::String* name, Locale* locale);
    static ResourceBundle* getBundle(::java::lang::String* name);
    virtual ::java::lang::Object* getObject(::java::lang::String* key);
    virtual ::java::lang::String* getString(::java::lang::String* key);

public: /* protected */
    virtual ::java::lang::Object* handleGetObject(::java::lang::String* key) = 0;

public:
    virtual Enumeration* getKeys() = 0;

    // Generated
    ResourceBundle();
protected:
    ResourceBundle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
