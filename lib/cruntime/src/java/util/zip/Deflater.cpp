// Generated from /runtime/java/util/zip/Deflater.java
#include <java/util/zip/Deflater.hpp>

#include <java/lang/AssertionError.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::Deflater::Deflater(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::Deflater::Deflater(int32_t level, bool nowrap) 
    : Deflater(*static_cast< ::default_init_tag* >(0))
{
    ctor(level,nowrap);
}

java::util::zip::Deflater::Deflater(int32_t level) 
    : Deflater(*static_cast< ::default_init_tag* >(0))
{
    ctor(level);
}

java::util::zip::Deflater::Deflater() 
    : Deflater(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::util::zip::Deflater::DEFAULT_LEVEL;

constexpr int32_t java::util::zip::Deflater::Z_OK;

constexpr int32_t java::util::zip::Deflater::Z_STREAM_END;

constexpr int32_t java::util::zip::Deflater::Z_NEED_DICT;

void java::util::zip::Deflater::ctor(int32_t level, bool nowrap)
{
    super::ctor();
    this->nowrap = nowrap;
    peer = make(nowrap, level);
}

void java::util::zip::Deflater::ctor(int32_t level)
{
    ctor(level, false);
}

void java::util::zip::Deflater::ctor()
{
    ctor(DEFAULT_LEVEL);
}

void java::util::zip::Deflater::check()
{
    if(peer == 0) {
        throw new ::java::lang::IllegalStateException();
    }
}

bool java::util::zip::Deflater::finished()
{
    return finished_;
}

bool java::util::zip::Deflater::needsDictionary()
{
    return needDictionary;
}

bool java::util::zip::Deflater::needsInput()
{
    return getRemaining() == 0;
}

int32_t java::util::zip::Deflater::getRemaining()
{
    return length;
}

void java::util::zip::Deflater::setLevel(int32_t level) /* throws(IllegalArgumentException) */
{
    if(level < 0 || level > 9) {
        throw new ::java::lang::IllegalArgumentException(u"Valid compression levels are 0-9"_j);
    }
    dispose(peer);
    peer = make(nowrap, level);
}

void java::util::zip::Deflater::setInput(::int8_tArray* input)
{
    setInput(input, 0, npc(input)->length);
}

void java::util::zip::Deflater::setInput(::int8_tArray* input, int32_t offset, int32_t length)
{
    this->input = input;
    this->offset = offset;
    this->length = length;
}

void java::util::zip::Deflater::reset()
{
    dispose();
    peer = make(nowrap, DEFAULT_LEVEL);
    input = nullptr;
    offset = length = 0;
    finish_ = false;
    needDictionary = finished_ = false;
}

int32_t java::util::zip::Deflater::deflate(::int8_tArray* output)
{
    return deflate(output, 0, npc(output)->length);
}

int32_t java::util::zip::Deflater::deflate(::int8_tArray* output, int32_t offset, int32_t length)
{
    auto const zlibResult = int32_t(0);
    auto const inputCount = int32_t(1);
    auto const outputCount = int32_t(2);
    if(peer == 0) {
        throw new ::java::lang::IllegalStateException();
    }
    if(input == nullptr || output == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    auto results = new ::int32_tArray(int32_t(3));
    deflate(peer, input, this->offset, this->length, output, offset, length, finish_, results);
    if((*results)[zlibResult] < 0) {
        throw new ::java::lang::AssertionError();
    }
    switch ((*results)[zlibResult]) {
    case Z_NEED_DICT:
        needDictionary = true;
        break;
    case Z_STREAM_END:
        finished_ = true;
        break;
    }

    this->offset += (*results)[inputCount];
    this->length -= (*results)[inputCount];
    return (*results)[outputCount];
}

void java::util::zip::Deflater::finish()
{
    finish_ = true;
}

void java::util::zip::Deflater::end()
{
    dispose();
}

void java::util::zip::Deflater::dispose()
{
    if(peer != 0) {
        dispose(peer);
        peer = 0;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::Deflater::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.Deflater", 22);
    return c;
}

java::lang::Class* java::util::zip::Deflater::getClass0()
{
    return class_();
}

