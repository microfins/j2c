// Generated from /runtime/java/util/Random.java
#include <java/util/Random.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

extern void lock(::java::lang::Object *);
extern void unlock(::java::lang::Object *);

namespace
{
    struct synchronized
    {
        synchronized(::java::lang::Object *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        ::java::lang::Object *o;
    };
}
java::util::Random::Random(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Random::Random(int64_t seed) 
    : Random(*static_cast< ::default_init_tag* >(0))
{
    ctor(seed);
}

java::util::Random::Random() 
    : Random(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t java::util::Random::Mask;

constexpr int64_t java::util::Random::InitialSeed;

int64_t& java::util::Random::nextSeed()
{
    clinit();
    return nextSeed_;
}
int64_t java::util::Random::nextSeed_;

void java::util::Random::ctor(int64_t seed)
{
    super::ctor();
    setSeed(seed);
}

void java::util::Random::ctor()
{
    super::ctor();
    {
        synchronized synchronized_0(Random::class_());
        {
            setSeed(nextSeed_ ^ ::java::lang::System::currentTimeMillis());
            nextSeed_ *= 123456789987654321LL;
            if(nextSeed_ == 0) {
                nextSeed_ = InitialSeed;
            }
        }
    }
}

void java::util::Random::setSeed(int64_t seed)
{
    this->seed = (seed ^ Mask) & ((int64_t(1LL) << int32_t(48)) - int32_t(1));
}

int32_t java::util::Random::next(int32_t bits)
{
    seed = ((seed * Mask) + int64_t(11LL)) & ((int64_t(1LL) << int32_t(48)) - int32_t(1));
    return static_cast< int32_t >((static_cast<int64_t>(static_cast<uint64_t>(seed) >> (int32_t(48) - bits))));
}

int32_t java::util::Random::nextInt(int32_t limit)
{
    if(limit <= 0) {
        throw new ::java::lang::IllegalArgumentException();
    }
    if((limit & -limit) == limit) {
        return static_cast< int32_t >(((limit * static_cast< int64_t >(next(31))) >> int32_t(31)));
    }
    int32_t bits;
    int32_t value;
    do {
        bits = next(31);
        value = bits % limit;
    } while (bits - value + (limit - int32_t(1)) < 0);
    return value;
}

int32_t java::util::Random::nextInt()
{
    return next(32);
}

void java::util::Random::nextBytes(::int8_tArray* bytes)
{
    auto const length = npc(bytes)->length;
    for (auto i = int32_t(0); i < length; ) {
        auto r = nextInt();
        for (auto j = ::java::lang::Math::min(length - i, int32_t(4)); j > 0; --j) {
            (*bytes)[i++] = static_cast< int8_t >(r);
            r >>= 8;
        }
    }
}

int64_t java::util::Random::nextLong()
{
    return (static_cast< int64_t >(next(32)) << int32_t(32)) + next(32);
}

double java::util::Random::nextDouble()
{
    return ((static_cast< int64_t >(next(26)) << int32_t(27)) + next(27)) / static_cast< double >((int64_t(1LL) << int32_t(53)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Random::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Random", 16);
    return c;
}

void java::util::Random::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        nextSeed_ = Random::InitialSeed;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::Random::getClass0()
{
    return class_();
}

