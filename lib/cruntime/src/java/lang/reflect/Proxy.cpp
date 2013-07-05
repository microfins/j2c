// Generated from /runtime/java/lang/reflect/Proxy.java
#include <java/lang/reflect/Proxy.hpp>

#include <avian/Assembler_MethodData.hpp>
#include <avian/Assembler.hpp>
#include <avian/Classes.hpp>
#include <avian/ConstantPool.hpp>
#include <avian/Stream.hpp>
#include <avian/SystemClassLoader.hpp>
#include <avian/VMClass.hpp>
#include <avian/VMMethod.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/AssertionError.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/InvocationHandler.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace avian
{
typedef ::SubArray< ::avian::Assembler_MethodData, ::java::lang::ObjectArray > Assembler_MethodDataArray;
typedef ::SubArray< ::avian::VMMethod, ::java::lang::ObjectArray > VMMethodArray;
} // avian

namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::lang::reflect::AnnotatedElementArray, ::java::lang::reflect::TypeArray > ClassArray;
    } // lang
} // java

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
java::lang::reflect::Proxy::Proxy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Proxy::Proxy()
    : Proxy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t& java::lang::reflect::Proxy::nextNumber()
{
    clinit();
    return nextNumber_;
}
int32_t java::lang::reflect::Proxy::nextNumber_;

java::lang::Class* java::lang::reflect::Proxy::getProxyClass(::java::lang::ClassLoader* loader, ::java::lang::ClassArray*/*...*/ interfaces)
{
    clinit();
    for(auto c : *npc(interfaces)) {
        if(!npc(c)->isInterface()) {
            throw new ::java::lang::IllegalArgumentException();
        }
    }
    int32_t number;
    {
        synchronized synchronized_0(Proxy::class_());
        {
            number = nextNumber_++;
        }
    }
    try {
        return makeClass(loader, interfaces, ::java::lang::StringBuilder().append(u"Proxy-"_j)->append(number)->toString());
    } catch (::java::io::IOException* e) {
        auto error = new ::java::lang::AssertionError();
        npc(error)->initCause(e);
        throw error;
    }
}

bool java::lang::reflect::Proxy::isProxyClass(::java::lang::Class* c)
{
    clinit();
    return npc(npc(c)->getName())->startsWith(u"Proxy-"_j);
}

java::lang::reflect::InvocationHandler* java::lang::reflect::Proxy::getInvocationHandler(::java::lang::Object* proxy)
{
    clinit();
    return npc((java_cast< Proxy* >(proxy)))->h;
}

int8_tArray* java::lang::reflect::Proxy::makeInvokeCode(::java::util::List* pool, ::java::lang::String* className, ::int8_tArray* spec, int32_t parameterCount, int32_t parameterFootprint, int32_t index) /* throws(IOException) */
{
    clinit();
    auto out = new ::java::io::ByteArrayOutputStream();
    ::avian::Stream::write2(out, 8);
    ::avian::Stream::write2(out, parameterFootprint);
    ::avian::Stream::write4(out, 0);
    ::avian::Stream::write1(out, ::avian::Assembler::aload_0);
    ::avian::Stream::write1(out, ::avian::Assembler::getfield);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addFieldRef(pool, u"java/lang/reflect/Proxy"_j, u"h"_j, u"Ljava/lang/reflect/InvocationHandler;"_j) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::aload_0);
    ::avian::Stream::write1(out, ::avian::Assembler::ldc_w);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addClass(pool, className) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::ldc_w);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addInteger(pool, index) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"avian/Classes"_j, u"makeMethod"_j, u"(Ljava/lang/Class;I)Ljava/lang/reflect/Method;"_j) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::ldc_w);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addInteger(pool, parameterCount) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::anewarray);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addClass(pool, u"java/lang/Object"_j) + int32_t(1));
    auto ai = int32_t(0);
    int32_t si;
    for (si = 1; (*spec)[si] != u')'; ++si) {
        ::avian::Stream::write1(out, ::avian::Assembler::dup);
        ::avian::Stream::write1(out, ::avian::Assembler::ldc_w);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addInteger(pool, ai) + int32_t(1));
        switch ((*spec)[si]) {
        case u'L':
            ++si;
            while ((*spec)[si] != u';') 
                                ++si;

            ::avian::Stream::write1(out, ::avian::Assembler::aload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            break;
        case u'[':
            ++si;
            while ((*spec)[si] == u'[') 
                                ++si;

            switch ((*spec)[si]) {
            case u'L':
                ++si;
                while ((*spec)[si] != u';') 
                                        ++si;

                break;
            default:
                break;
            }

            ::avian::Stream::write1(out, ::avian::Assembler::aload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            break;
        case u'Z':
            ::avian::Stream::write1(out, ::avian::Assembler::iload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Boolean"_j, u"valueOf"_j, u"(Z)Ljava/lang/Boolean;"_j) + int32_t(1));
            break;
        case u'B':
            ::avian::Stream::write1(out, ::avian::Assembler::iload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Byte"_j, u"valueOf"_j, u"(B)Ljava/lang/Byte;"_j) + int32_t(1));
            break;
        case u'S':
            ::avian::Stream::write1(out, ::avian::Assembler::iload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Short"_j, u"valueOf"_j, u"(S)Ljava/lang/Short;"_j) + int32_t(1));
            break;
        case u'C':
            ::avian::Stream::write1(out, ::avian::Assembler::iload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Character"_j, u"valueOf"_j, u"(C)Ljava/lang/Character;"_j) + int32_t(1));
            break;
        case u'I':
            ::avian::Stream::write1(out, ::avian::Assembler::iload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Integer"_j, u"valueOf"_j, u"(I)Ljava/lang/Integer;"_j) + int32_t(1));
            break;
        case u'F':
            ::avian::Stream::write1(out, ::avian::Assembler::fload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Float"_j, u"valueOf"_j, u"(F)Ljava/lang/Float;"_j) + int32_t(1));
            break;
        case u'J':
            ::avian::Stream::write1(out, ::avian::Assembler::lload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Long"_j, u"valueOf"_j, u"(J)Ljava/lang/Long;"_j) + int32_t(1));
            ++ai;
            break;
        case u'D':
            ::avian::Stream::write1(out, ::avian::Assembler::dload);
            ::avian::Stream::write1(out, ai + int32_t(1));
            ::avian::Stream::write1(out, ::avian::Assembler::invokestatic);
            ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Double"_j, u"valueOf"_j, u"(D)Ljava/lang/Double;"_j) + int32_t(1));
            ++ai;
            break;
        default:
            throw new ::java::lang::IllegalArgumentException();
        }

        ::avian::Stream::write1(out, ::avian::Assembler::aastore);
        ++ai;
    }
    ::avian::Stream::write1(out, ::avian::Assembler::invokeinterface);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/reflect/InvocationHandler"_j, u"invoke"_j, ::java::lang::StringBuilder().append(u"(Ljava/lang/Object;"_j)->append(u"Ljava/lang/reflect/Method;"_j)
        ->append(u"[Ljava/lang/Object;)"_j)
        ->append(u"Ljava/lang/Object;"_j)->toString()) + int32_t(1));
    ::avian::Stream::write2(out, 0);
    switch ((*spec)[si + int32_t(1)]) {
    case u'L':
    case u'[':
        ::avian::Stream::write1(out, ::avian::Assembler::areturn);
        break;
    case u'Z':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Boolean"_j, u"booleanValue"_j, u"()Z"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::ireturn);
        break;
    case u'B':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Byte"_j, u"byteValue"_j, u"()B"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::ireturn);
        break;
    case u'C':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Character"_j, u"charValue"_j, u"()C"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::ireturn);
        break;
    case u'S':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Short"_j, u"shortValue"_j, u"()S"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::ireturn);
        break;
    case u'I':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Integer"_j, u"intValue"_j, u"()I"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::ireturn);
        break;
    case u'F':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Float"_j, u"floatValue"_j, u"()F"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::freturn);
        break;
    case u'J':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Long"_j, u"longValue"_j, u"()J"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::lreturn);
        break;
    case u'D':
        ::avian::Stream::write1(out, ::avian::Assembler::invokevirtual);
        ::avian::Stream::write2(out, ::avian::ConstantPool::addMethodRef(pool, u"java/lang/Double"_j, u"doubleValue"_j, u"()D"_j) + int32_t(1));
        ::avian::Stream::write1(out, ::avian::Assembler::dreturn);
        break;
    case u'V':
        ::avian::Stream::write1(out, ::avian::Assembler::pop);
        ::avian::Stream::write1(out, ::avian::Assembler::return_);
        break;
    default:
        throw new ::java::lang::IllegalArgumentException();
    }

    ::avian::Stream::write2(out, 0);
    ::avian::Stream::write2(out, 0);
    auto result = npc(out)->toByteArray_();
    ::avian::Stream::set4(result, 4, npc(result)->length - int32_t(12));
    return result;
}

int8_tArray* java::lang::reflect::Proxy::makeConstructorCode(::java::util::List* pool) /* throws(IOException) */
{
    clinit();
    auto out = new ::java::io::ByteArrayOutputStream();
    ::avian::Stream::write2(out, 2);
    ::avian::Stream::write2(out, 2);
    ::avian::Stream::write4(out, 6);
    ::avian::Stream::write1(out, ::avian::Assembler::aload_0);
    ::avian::Stream::write1(out, ::avian::Assembler::aload_1);
    ::avian::Stream::write1(out, ::avian::Assembler::putfield);
    ::avian::Stream::write2(out, ::avian::ConstantPool::addFieldRef(pool, u"java/lang/reflect/Proxy"_j, u"h"_j, u"Ljava/lang/reflect/InvocationHandler;"_j) + int32_t(1));
    ::avian::Stream::write1(out, ::avian::Assembler::return_);
    ::avian::Stream::write2(out, 0);
    ::avian::Stream::write2(out, 0);
    return npc(out)->toByteArray_();
}

java::lang::Class* java::lang::reflect::Proxy::makeClass(::java::lang::ClassLoader* loader, ::java::lang::ClassArray* interfaces, ::java::lang::String* name) /* throws(IOException) */
{
    clinit();
    ::java::util::List* pool = new ::java::util::ArrayList();
    auto interfaceIndexes = new ::int32_tArray(npc(interfaces)->length);
    for (auto i = int32_t(0); i < npc(interfaces)->length; ++i) {
        (*interfaceIndexes)[i] = ::avian::ConstantPool::addClass(pool, npc(npc((*interfaces)[i])->getName())->replace(u'.', u'/'));
    }
    ::java::util::Map* virtualMap = new ::java::util::HashMap();
    for(auto c : *npc(interfaces)) {
        auto ivtable = npc(::avian::SystemClassLoader::vmClass(c))->virtualTable;
        if(ivtable != nullptr) {
            for(auto m : *npc(ivtable)) {
                npc(virtualMap)->put(::java::lang::StringBuilder().append(::avian::Classes::toString(npc(m)->name))->append(::avian::Classes::toString(npc(m)->spec))->toString(), m);
            }
        }
    }
    auto methodTable = new ::avian::Assembler_MethodDataArray(npc(virtualMap)->size() + int32_t(1));
{
        auto i = int32_t(0);
        for (auto _i = npc(npc(virtualMap)->values())->iterator(); _i->hasNext(); ) {
            ::avian::VMMethod* m = java_cast< ::avian::VMMethod* >(_i->next());
            {
                methodTable->set(i, new ::avian::Assembler_MethodData(int32_t(0), ::avian::ConstantPool::addUtf8(pool, ::avian::Classes::toString(npc(m)->name)), ::avian::ConstantPool::addUtf8(pool, ::avian::Classes::toString(npc(m)->spec)), makeInvokeCode(pool, name, npc(m)->spec, npc(m)->parameterCount, npc(m)->parameterFootprint, i)));
                ++i;
            }
        }
        methodTable->set(i++, new ::avian::Assembler_MethodData(Modifier::PUBLIC, ::avian::ConstantPool::addUtf8(pool, u"<init>"_j), ::avian::ConstantPool::addUtf8(pool, u"(Ljava/lang/reflect/InvocationHandler;)V"_j), makeConstructorCode(pool)));
    }

    auto nameIndex = ::avian::ConstantPool::addClass(pool, name);
    auto superIndex = ::avian::ConstantPool::addClass(pool, u"java/lang/reflect/Proxy"_j);
    auto out = new ::java::io::ByteArrayOutputStream();
    ::avian::Assembler::writeClass(out, pool, nameIndex, superIndex, interfaceIndexes, methodTable);
    auto classData = npc(out)->toByteArray_();
    return ::avian::SystemClassLoader::getClass(::avian::Classes::defineVMClass(loader, classData, 0, npc(classData)->length));
}

java::lang::Object* java::lang::reflect::Proxy::newProxyInstance(::java::lang::ClassLoader* loader, ::java::lang::ClassArray* interfaces, InvocationHandler* handler)
{
    clinit();
    try {
        return java_cast< ::java::lang::Object* >(npc(npc(Proxy::getProxyClass(loader, interfaces))->getConstructor(new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(InvocationHandler::class_())})))->newInstance(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(handler)})));
    } catch (::java::lang::Exception* e) {
        auto error = new ::java::lang::AssertionError();
        npc(error)->initCause(e);
        throw error;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Proxy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Proxy", 23);
    return c;
}

java::lang::Class* java::lang::reflect::Proxy::getClass0()
{
    return class_();
}

