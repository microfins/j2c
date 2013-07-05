// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile.hpp>

#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/RandomAccessFile.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/zip/Inflater.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipFile_getInputStream_1.hpp>
#include <java/util/zip/ZipFile_EntryFactory.hpp>
#include <java/util/zip/ZipFile_MyEntry.hpp>
#include <java/util/zip/ZipFile_MyEnumeration.hpp>
#include <java/util/zip/ZipFile_MyInputStream.hpp>
#include <java/util/zip/ZipFile_Window.hpp>
#include <java/util/zip/ZipFile_ZipEntryFactory.hpp>
#include <Array.hpp>

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

java::util::zip::ZipFile::ZipFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile::ZipFile(::java::lang::String* name)  /* throws(IOException) */
    : ZipFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::util::zip::ZipFile::ZipFile(::java::io::File* file)  /* throws(IOException) */
    : ZipFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::util::zip::ZipFile::init()
{
    index = new ::java::util::HashMap();
}

void java::util::zip::ZipFile::ctor(::java::lang::String* name) /* throws(IOException) */
{
    super::ctor();
    init();
    file = new ::java::io::RandomAccessFile(name, u"r"_j);
    window = new ZipFile_Window(file, int32_t(4096));
    auto fileLength = static_cast< int32_t >(npc(file)->length());
    auto pointer = fileLength - int32_t(22);
    auto magic = new ::int8_tArray({
        static_cast< int8_t >(int32_t(80))
        , static_cast< int8_t >(int32_t(75))
        , static_cast< int8_t >(int32_t(5))
        , static_cast< int8_t >(int32_t(6))
    });
    while (pointer > 0) {
        if(equal(npc(window)->data, npc(window)->seek(pointer, npc(magic)->length), magic, 0, npc(magic)->length)) {
            pointer = directoryOffset(window, pointer);
            magic = new ::int8_tArray({
                static_cast< int8_t >(int32_t(80))
                , static_cast< int8_t >(int32_t(75))
                , static_cast< int8_t >(int32_t(1))
                , static_cast< int8_t >(int32_t(2))
            });
            while (pointer < fileLength) {
                if(equal(npc(window)->data, npc(window)->seek(pointer, npc(magic)->length), magic, 0, npc(magic)->length)) {
                    npc(index)->put(entryName(window, pointer), ::java::lang::Integer::valueOf(pointer));
                    pointer = entryEnd(window, pointer);
                } else {
                    pointer = fileLength;
                }
            }
            pointer = 0;
        } else {
            --pointer;
        }
    }
}

void java::util::zip::ZipFile::ctor(::java::io::File* file) /* throws(IOException) */
{
    ctor(npc(file)->getAbsolutePath());
}

int32_t java::util::zip::ZipFile::size()
{
    return npc(index)->size();
}

java::util::Enumeration* java::util::zip::ZipFile::makeEnumeration(ZipFile_EntryFactory* factory)
{
    return new ZipFile_MyEnumeration(factory, window, npc(npc(index)->values())->iterator());
}

java::util::Enumeration* java::util::zip::ZipFile::entries()
{
    return makeEnumeration(ZipFile_ZipEntryFactory::Instance());
}

java::util::zip::ZipEntry* java::util::zip::ZipFile::getEntry(ZipFile_EntryFactory* factory, ::java::lang::String* name)
{
    while (npc(name)->startsWith(u"/"_j)) {
        name = npc(name)->substring(1);
    }
    auto pointer = java_cast< ::java::lang::Integer* >(npc(index)->get(name));
    return (pointer == nullptr ? static_cast< ZipEntry* >(nullptr) : npc(factory)->makeEntry(window, (npc(pointer))->intValue()));
}

java::util::zip::ZipEntry* java::util::zip::ZipFile::getEntry(::java::lang::String* name)
{
    return getEntry(ZipFile_ZipEntryFactory::Instance(), name);
}

java::io::InputStream* java::util::zip::ZipFile::getInputStream(ZipEntry* entry) /* throws(IOException) */
{
    auto const pointer = npc((java_cast< ZipFile_MyEntry* >(entry)))->pointer();
    auto method = compressionMethod(window, pointer);
    auto size = compressedSize(window, pointer);
    ::java::io::InputStream* in = new ZipFile_MyInputStream(file, fileData(window, pointer), size);
    auto const Stored = int32_t(0);
    auto const Deflated = int32_t(8);
    switch (method) {
    case Stored:
        return in;
    case Deflated:
        return new ZipFile_getInputStream_1(this, pointer, in, new Inflater(true));
    default:
        throw new ::java::io::IOException();
    }

}

bool java::util::zip::ZipFile::equal(::int8_tArray* a, int32_t aOffset, ::int8_tArray* b, int32_t bOffset, int32_t size)
{
    clinit();
    for (auto i = int32_t(0); i < size; ++i) {
        if((*a)[aOffset + i] != (*b)[bOffset + i])
            return false;

    }
    return true;
}

int32_t java::util::zip::ZipFile::get2(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    auto offset = npc(w)->seek(p, 2);
    return (((*npc(w)->data)[offset + int32_t(1)] & int32_t(255)) << int32_t(8)) | (((*npc(w)->data)[offset] & int32_t(255)));
}

int32_t java::util::zip::ZipFile::get4(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    auto offset = npc(w)->seek(p, 4);
    return (((*npc(w)->data)[offset + int32_t(3)] & int32_t(255)) << int32_t(24)) | (((*npc(w)->data)[offset + int32_t(2)] & int32_t(255)) << int32_t(16)) | (((*npc(w)->data)[offset + int32_t(1)] & int32_t(255)) << int32_t(8))| (((*npc(w)->data)[offset] & int32_t(255)));
}

int32_t java::util::zip::ZipFile::directoryOffset(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get4(w, p + int32_t(16));
}

int32_t java::util::zip::ZipFile::entryNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(28));
}

java::lang::String* java::util::zip::ZipFile::entryName(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    auto length = entryNameLength(w, p);
    return new ::java::lang::String(npc(w)->data, npc(w)->seek(p + int32_t(46), length), length);
}

int32_t java::util::zip::ZipFile::compressionMethod(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(10));
}

int32_t java::util::zip::ZipFile::compressedSize(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get4(w, p + int32_t(20));
}

int32_t java::util::zip::ZipFile::uncompressedSize(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get4(w, p + int32_t(24));
}

int32_t java::util::zip::ZipFile::fileNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(28));
}

int32_t java::util::zip::ZipFile::extraFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(30));
}

int32_t java::util::zip::ZipFile::commentFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(32));
}

int32_t java::util::zip::ZipFile::entryEnd(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    auto const HeaderSize = int32_t(46);
    return p + HeaderSize + fileNameLength(w, p)+ extraFieldLength(w, p)+ commentFieldLength(w, p);
}

int32_t java::util::zip::ZipFile::fileData(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    auto localHeader = ZipFile::localHeader(w, p);
    auto const LocalHeaderSize = int32_t(30);
    return localHeader + LocalHeaderSize + localFileNameLength(w, localHeader)+ localExtraFieldLength(w, localHeader);
}

int32_t java::util::zip::ZipFile::localHeader(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get4(w, p + int32_t(42));
}

int32_t java::util::zip::ZipFile::localFileNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(26));
}

int32_t java::util::zip::ZipFile::localExtraFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */
{
    clinit();
    return get2(w, p + int32_t(28));
}

void java::util::zip::ZipFile::close() /* throws(IOException) */
{
    npc(file)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile", 21);
    return c;
}

java::lang::Class* java::util::zip::ZipFile::getClass0()
{
    return class_();
}

