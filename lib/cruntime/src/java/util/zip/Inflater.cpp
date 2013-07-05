// Generated from /runtime/java/util/zip/Inflater.java
#include <java/util/zip/Inflater.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/zip/DataFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::Inflater::Inflater(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::Inflater::Inflater(bool nowrap) 
    : Inflater(*static_cast< ::default_init_tag* >(0))
{
    ctor(nowrap);
}

java::util::zip::Inflater::Inflater() 
    : Inflater(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::util::zip::Inflater::Z_OK;

constexpr int32_t java::util::zip::Inflater::Z_STREAM_END;

constexpr int32_t java::util::zip::Inflater::Z_NEED_DICT;

void java::util::zip::Inflater::ctor(bool nowrap)
{
    super::ctor();
    this->nowrap = nowrap;
    peer = make(nowrap);
}

void java::util::zip::Inflater::ctor()
{
    ctor(false);
}

void java::util::zip::Inflater::check()
{
    if(peer == 0) {
        throw new ::java::lang::IllegalStateException();
    }
}

bool java::util::zip::Inflater::finished()
{
    return finished_;
}

bool java::util::zip::Inflater::needsDictionary()
{
    return needDictionary;
}

bool java::util::zip::Inflater::needsInput()
{
    return getRemaining() == 0;
}

int32_t java::util::zip::Inflater::getRemaining()
{
    return length;
}

void java::util::zip::Inflater::setInput(::int8_tArray* input)
{
    setInput(input, 0, npc(input)->length);
}

void java::util::zip::Inflater::setInput(::int8_tArray* input, int32_t offset, int32_t length)
{
    this->input = input;
    this->offset = offset;
    this->length = length;
}

void java::util::zip::Inflater::reset()
{
    dispose();
    peer = make(nowrap);
    input = nullptr;
    offset = length = 0;
    needDictionary = finished_ = false;
}

int32_t java::util::zip::Inflater::inflate(::int8_tArray* output) /* throws(DataFormatException) */
{
    return inflate(output, 0, npc(output)->length);
}

int32_t java::util::zip::Inflater::inflate(::int8_tArray* output, int32_t offset, int32_t length) /* throws(DataFormatException) */
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
    inflate(peer, input, this->offset, this->length, output, offset, length, results);
    if((*results)[zlibResult] < 0) {
        throw new DataFormatException();
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

void java::util::zip::Inflater::end()
{
    dispose();
}

void java::util::zip::Inflater::dispose()
{
    if(peer != 0) {
        dispose(peer);
        peer = 0;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::Inflater::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.Inflater", 22);
    return c;
}

java::lang::Class* java::util::zip::Inflater::getClass0()
{
    return class_();
}

