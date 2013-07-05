// Generated from /runtime/java/lang/StackTraceElement.java
#include <java/lang/StackTraceElement.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

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

java::lang::StackTraceElement::StackTraceElement(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::StackTraceElement::StackTraceElement(String* class__, String* method, String* file, int32_t line) 
    : StackTraceElement(*static_cast< ::default_init_tag* >(0))
{
    ctor(class__,method,file,line);
}

int32_t& java::lang::StackTraceElement::NativeLine()
{
    clinit();
    return NativeLine_;
}
int32_t java::lang::StackTraceElement::NativeLine_;

void java::lang::StackTraceElement::ctor(String* class__, String* method, String* file, int32_t line)
{
    super::ctor();
    this->class__ = class__;
    this->method = method;
    this->file = file;
    this->line = line;
}

int32_t java::lang::StackTraceElement::hashCode()
{
    return npc(class__)->hashCode() ^ npc(method)->hashCode() ^ line;
}

bool java::lang::StackTraceElement::equals(Object* o)
{
    if(dynamic_cast< StackTraceElement* >(o) != nullptr) {
        auto e = java_cast< StackTraceElement* >(o);
        return npc(class__)->equals(static_cast< Object* >(npc(e)->class__)) && npc(method)->equals(static_cast< Object* >(npc(e)->method)) && line == npc(e)->line;
    } else {
        return false;
    }
}

java::lang::String* java::lang::StackTraceElement::toString()
{
    auto sb = new StringBuilder();
    npc(npc(npc(sb)->append(class__))->append(u"."_j))->append(method);
    if(line == NativeLine_) {
        npc(sb)->append(u" (native)"_j);
    } else if(line >= 0) {
        npc(npc(npc(sb)->append(u" (line "_j))->append(line))->append(u")"_j);
    }
    return npc(sb)->toString();
}

java::lang::String* java::lang::StackTraceElement::getClassName()
{
    return class__;
}

java::lang::String* java::lang::StackTraceElement::getMethodName()
{
    return method;
}

java::lang::String* java::lang::StackTraceElement::getFileName()
{
    return file;
}

int32_t java::lang::StackTraceElement::getLineNumber()
{
    return line;
}

bool java::lang::StackTraceElement::isNativeMethod()
{
    return line == NativeLine_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::StackTraceElement::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.StackTraceElement", 27);
    return c;
}

void java::lang::StackTraceElement::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NativeLine_ = -int32_t(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::StackTraceElement::getClass0()
{
    return class_();
}

