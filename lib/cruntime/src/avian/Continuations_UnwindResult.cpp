// Generated from /runtime/avian/Continuations.java
#include <avian/Continuations_UnwindResult.hpp>

#include <avian/Callback.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>

avian::Continuations_UnwindResult::Continuations_UnwindResult(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Continuations_UnwindResult::Continuations_UnwindResult(Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception) 
    : Continuations_UnwindResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(continuation,result,exception);
}

void avian::Continuations_UnwindResult::ctor(Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception)
{
    super::ctor();
    this->continuation = continuation;
    this->result = result;
    this->exception = exception;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Continuations_UnwindResult::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Continuations.UnwindResult", 32);
    return c;
}

java::lang::Class* avian::Continuations_UnwindResult::getClass0()
{
    return class_();
}

