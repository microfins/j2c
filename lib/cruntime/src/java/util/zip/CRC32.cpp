// Generated from /runtime/java/util/zip/CRC32.java
#include <java/util/zip/CRC32.hpp>

#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::CRC32::CRC32(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::CRC32::CRC32()
    : CRC32(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::zip::CRC32::ctor()
{
    super::ctor();
    init();
}

void java::util::zip::CRC32::init()
{
    remainder = CRC32::InitialRemainder;
}

constexpr int32_t java::util::zip::CRC32::Polynomial;

constexpr int32_t java::util::zip::CRC32::Width;

constexpr int32_t java::util::zip::CRC32::Top;

constexpr int32_t java::util::zip::CRC32::InitialRemainder;

constexpr int64_t java::util::zip::CRC32::ResultXor;

int32_tArray*& java::util::zip::CRC32::table()
{
    clinit();
    return table_;
}
int32_tArray* java::util::zip::CRC32::table_;

void java::util::zip::CRC32::reset()
{
    remainder = InitialRemainder;
}

void java::util::zip::CRC32::update(int32_t b)
{
    remainder = (*table_)[reflect(b, 8) ^ (static_cast<int32_t>(static_cast<uint32_t>(remainder) >> (Width - int32_t(8))))] ^ (remainder << int32_t(8));
}

void java::util::zip::CRC32::update(::int8_tArray* array, int32_t offset, int32_t length)
{
    for (auto i = int32_t(0); i < length; ++i) {
        update((*array)[offset + i] & int32_t(255));
    }
}

void java::util::zip::CRC32::update(::int8_tArray* array)
{
    update(array, 0, npc(array)->length);
}

int64_t java::util::zip::CRC32::getValue()
{
    return (reflect(remainder, Width) ^ ResultXor) & int64_t(4294967295LL);
}

int32_t java::util::zip::CRC32::reflect(int32_t x, int32_t n)
{
    clinit();
    auto reflection = int32_t(0);
    for (auto i = int32_t(0); i < n; ++i) {
        if((x & int32_t(1)) != 0) {
            reflection |= (int32_t(1) << ((n - int32_t(1)) - i));
        }
        x = (static_cast<int32_t>(static_cast<uint32_t>(x) >> int32_t(1)));
    }
    return reflection;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::CRC32::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.CRC32", 19);
    return c;
}

void java::util::zip::CRC32::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        table_ = new ::int32_tArray(int32_t(256));
        {
            for (auto dividend = int32_t(0); dividend < 256; ++dividend) {
                auto remainder = dividend << (Width - int32_t(8));
                for (auto bit = int32_t(8); bit > 0; --bit) {
                    remainder = ((remainder & Top) != 0) ? (remainder << int32_t(1)) ^ Polynomial : (remainder << int32_t(1));
                }
                (*table_)[dividend] = remainder;
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::zip::CRC32::getClass0()
{
    return class_();
}

