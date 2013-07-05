// Generated from /runtime/java/io/File.java
#include <java/io/File.hpp>

#include <java/io/File_Pair.hpp>
#include <java/io/FilenameFilter.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
typedef ::SubArray< ::java::io::File, ::java::lang::ObjectArray, SerializableArray > FileArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
java::io::File::File(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::File::File(::java::lang::String* path) 
    : File(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::io::File::File(::java::lang::String* parent, ::java::lang::String* child) 
    : File(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,child);
}

java::io::File::File(File* parent, ::java::lang::String* child) 
    : File(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,child);
}

java::lang::String*& java::io::File::FileSeparator()
{
    clinit();
    return FileSeparator_;
}
java::lang::String* java::io::File::FileSeparator_;

java::lang::String*& java::io::File::separator()
{
    clinit();
    return separator_;
}
java::lang::String* java::io::File::separator_;

java::lang::String*& java::io::File::PathSeparator()
{
    clinit();
    return PathSeparator_;
}
java::lang::String* java::io::File::PathSeparator_;

java::lang::String*& java::io::File::pathSeparator()
{
    clinit();
    return pathSeparator_;
}
java::lang::String* java::io::File::pathSeparator_;

void java::io::File::ctor(::java::lang::String* path)
{
    super::ctor();
    if(path == nullptr)
        throw new ::java::lang::NullPointerException();

    this->path = normalize(path);
}

void java::io::File::ctor(::java::lang::String* parent, ::java::lang::String* child)
{
    ctor(::java::lang::StringBuilder().append(parent)->append(FileSeparator_)
        ->append(child)->toString());
}

void java::io::File::ctor(File* parent, ::java::lang::String* child)
{
    ctor(::java::lang::StringBuilder().append(npc(parent)->getPath())->append(FileSeparator_)
        ->append(child)->toString());
}

java::io::File* java::io::File::createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */
{
    clinit();
    return createTempFile(prefix, suffix, nullptr);
}

java::io::File* java::io::File::createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix, File* directory) /* throws(IOException) */
{
    clinit();
    if(directory == nullptr) {
        directory = new File(::java::lang::System::getProperty(u"java.io.tmpdir"_j));
    }
    if(suffix == nullptr) {
        suffix = u".tmp"_j;
    }
    File* ret;
    auto state = ::java::lang::System::currentTimeMillis();
    do {
        ret = generateFile(directory, prefix, state, suffix);
        state *= 7;
        state += 3;
    } while (ret == nullptr);
    npc(ret)->createNewFile();
    return ret;
}

java::io::File* java::io::File::generateFile(File* directory, ::java::lang::String* prefix, int64_t state, ::java::lang::String* suffix)
{
    clinit();
    auto ret = new File(directory, ::java::lang::StringBuilder().append(prefix)->append(state)
        ->append(suffix)->toString());
    if(npc(ret)->exists()) {
        return nullptr;
    } else {
        return ret;
    }
}

java::lang::String* java::io::File::stripSeparators(::java::lang::String* p)
{
    clinit();
    while (npc(p)->endsWith(FileSeparator_)) {
        p = npc(p)->substring(0, npc(p)->length() - int32_t(1));
    }
    return p;
}

java::lang::String* java::io::File::normalize(::java::lang::String* path)
{
    clinit();
    return stripSeparators(npc(u"\\"_j)->equals(static_cast< ::java::lang::Object* >(FileSeparator_)) ? npc(path)->replace(u'/', u'\\') : path);
}

bool java::io::File::renameTo(File* newName)
{
    return rename(path, npc(newName)->path);
}

bool java::io::File::isDirectory()
{
    return isDirectory(path);
}

bool java::io::File::isFile()
{
    return isFile(path);
}

bool java::io::File::isAbsolute()
{
    return npc(path)->equals(static_cast< ::java::lang::Object* >(toAbsolutePath(path)));
}

bool java::io::File::canRead()
{
    return canRead(path);
}

bool java::io::File::canWrite()
{
    return canWrite(path);
}

bool java::io::File::canExecute()
{
    return canExecute(path);
}

bool java::io::File::setExecutable(bool executable)
{
    return setExecutable(executable, true);
}

bool java::io::File::setExecutable(bool executable, bool ownerOnly)
{
    return setExecutable(path, executable, ownerOnly);
}

java::lang::String* java::io::File::getName()
{
    auto index = npc(path)->lastIndexOf(FileSeparator_);
    if(index >= 0) {
        return npc(path)->substring(index + int32_t(1));
    } else {
        return path;
    }
}

java::lang::String* java::io::File::toString()
{
    return getPath();
}

java::lang::String* java::io::File::getPath()
{
    return path;
}

java::lang::String* java::io::File::getParent()
{
    auto index = npc(path)->lastIndexOf(FileSeparator_);
    if(index >= 0) {
        return normalize(npc(path)->substring(0, index));
    } else {
        return nullptr;
    }
}

java::io::File* java::io::File::getParentFile()
{
    auto s = getParent();
    return (s == nullptr ? static_cast< File* >(nullptr) : new File(s));
}

java::lang::String* java::io::File::getCanonicalPath()
{
    return toCanonicalPath(path);
}

java::io::File* java::io::File::getCanonicalFile()
{
    return new File(getCanonicalPath());
}

java::lang::String* java::io::File::getAbsolutePath()
{
    return toAbsolutePath(path);
}

java::io::File* java::io::File::getAbsoluteFile()
{
    return new File(getAbsolutePath());
}

int64_t java::io::File::length()
{
    return length(path);
}

bool java::io::File::exists()
{
    return exists(path);
}

bool java::io::File::mkdir()
{
    try {
        mkdir(path);
        return true;
    } catch (IOException* e) {
        return false;
    }
}

bool java::io::File::createNewFile() /* throws(IOException) */
{
    return createNewFile(path);
}

bool java::io::File::delete_()
{
    try {
        delete_(path);
        return true;
    } catch (IOException* e) {
        return false;
    }
}

bool java::io::File::mkdirs()
{
    auto parent = getParentFile();
    if(parent != nullptr) {
        if(!npc(parent)->exists()) {
            if(!npc(parent)->mkdirs()) {
                return false;
            }
        }
    }
    return mkdir();
}

java::io::FileArray* java::io::File::listFiles()
{
    return listFiles(nullptr);
}

java::io::FileArray* java::io::File::listFiles(FilenameFilter* filter)
{
    auto list = this->list(filter);
    if(list != nullptr) {
        auto result = new FileArray(npc(list)->length);
        for (auto i = int32_t(0); i < npc(list)->length; ++i) {
            result->set(i, new File(this, (*list)[i]));
        }
        return result;
    } else {
        return nullptr;
    }
}

java::lang::StringArray* java::io::File::list()
{
    return list(nullptr);
}

java::lang::StringArray* java::io::File::list(FilenameFilter* filter)
{
    int64_t handle = int32_t(0);
    {
        auto finally0 = finally([&] {
            if(handle != 0) {
                closeDir(handle);
            }
        });
        {
            handle = openDir(path);
            if(handle != 0) {
                File_Pair* list = nullptr;
                auto count = int32_t(0);
                for (auto *s = readDir(handle); s != nullptr; s = readDir(handle)) {
                    if(filter == nullptr || npc(filter)->accept(this, s)) {
                        list = new File_Pair(s, list);
                        ++count;
                    }
                }
                auto result = new ::java::lang::StringArray(count);
                for (auto i = count - int32_t(1); i >= 0; --i) {
                    result->set(i, npc(list)->value);
                    list = npc(list)->next;
                }
                return result;
            } else {
                return nullptr;
            }
        }
    }

}

int64_t java::io::File::lastModified()
{
    return lastModified(path);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::File::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.File", 12);
    return c;
}

void java::io::File::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FileSeparator_ = ::java::lang::System::getProperty(u"file.separator"_j);
        separator_ = File::FileSeparator_;
        PathSeparator_ = ::java::lang::System::getProperty(u"path.separator"_j);
        pathSeparator_ = File::PathSeparator_;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::io::File::getClass0()
{
    return class_();
}

