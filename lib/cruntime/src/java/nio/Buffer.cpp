// Generated from /runtime/java/nio/Buffer.java
#include <java/nio/Buffer.hpp>

java::nio::Buffer::Buffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::Buffer::Buffer()
    : Buffer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::nio::Buffer::limit()
{
    return limit_;
}

int32_t java::nio::Buffer::remaining()
{
    return limit_ - position_;
}

int32_t java::nio::Buffer::position()
{
    return position_;
}

int32_t java::nio::Buffer::capacity()
{
    return capacity_;
}

java::nio::Buffer* java::nio::Buffer::limit(int32_t newLimit)
{
    limit_ = newLimit;
    return this;
}

java::nio::Buffer* java::nio::Buffer::position(int32_t newPosition)
{
    position_ = newPosition;
    return this;
}

bool java::nio::Buffer::hasRemaining()
{
    return remaining() > 0;
}

java::nio::Buffer* java::nio::Buffer::clear()
{
    position_ = 0;
    limit_ = capacity_;
    return this;
}

java::nio::Buffer* java::nio::Buffer::flip()
{
    limit_ = position_;
    position_ = 0;
    return this;
}

java::nio::Buffer* java::nio::Buffer::rewind()
{
    position_ = 0;
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::Buffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.Buffer", 15);
    return c;
}

java::lang::Class* java::nio::Buffer::getClass0()
{
    return class_();
}

