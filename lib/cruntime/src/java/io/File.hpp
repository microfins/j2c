// Generated from /runtime/java/io/File.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class java::io::File
    : public virtual ::java::lang::Object
    , public virtual Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* FileSeparator_;
    static ::java::lang::String* separator_;
    static ::java::lang::String* PathSeparator_;
    static ::java::lang::String* pathSeparator_;
    ::java::lang::String* path {  };
protected:
    void ctor(::java::lang::String* path);
    void ctor(::java::lang::String* parent, ::java::lang::String* child);
    void ctor(File* parent, ::java::lang::String* child);

public:
    static File* createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */;
    static File* createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix, File* directory) /* throws(IOException) */;

private:
    static File* generateFile(File* directory, ::java::lang::String* prefix, int64_t state, ::java::lang::String* suffix);
    static ::java::lang::String* stripSeparators(::java::lang::String* p);
    static ::java::lang::String* normalize(::java::lang::String* path);

public:
    static bool rename(::java::lang::String* old, ::java::lang::String* new_);
    virtual bool renameTo(File* newName);

private:
    static bool isDirectory(::java::lang::String* path);

public:
    virtual bool isDirectory();

private:
    static bool isFile(::java::lang::String* path);

public:
    virtual bool isFile();
    virtual bool isAbsolute();

private:
    static bool canRead(::java::lang::String* path);

public:
    virtual bool canRead();

private:
    static bool canWrite(::java::lang::String* path);

public:
    virtual bool canWrite();

private:
    static bool canExecute(::java::lang::String* path);

public:
    virtual bool canExecute();

private:
    static bool setExecutable(::java::lang::String* path, bool executable, bool ownerOnly);

public:
    virtual bool setExecutable(bool executable);
    virtual bool setExecutable(bool executable, bool ownerOnly);
    virtual ::java::lang::String* getName();
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* getPath();
    virtual ::java::lang::String* getParent();
    virtual File* getParentFile();

private:
    static ::java::lang::String* toCanonicalPath(::java::lang::String* path);

public:
    virtual ::java::lang::String* getCanonicalPath();
    virtual File* getCanonicalFile();

private:
    static ::java::lang::String* toAbsolutePath(::java::lang::String* path);

public:
    virtual ::java::lang::String* getAbsolutePath();
    virtual File* getAbsoluteFile();

private:
    static int64_t length(::java::lang::String* path);

public:
    virtual int64_t length();

private:
    static bool exists(::java::lang::String* path);

public:
    virtual bool exists();

private:
    static void mkdir(::java::lang::String* path) /* throws(IOException) */;

public:
    virtual bool mkdir();

private:
    static bool createNewFile(::java::lang::String* path) /* throws(IOException) */;

public:
    virtual bool createNewFile() /* throws(IOException) */;
    static void delete_(::java::lang::String* path) /* throws(IOException) */;
    virtual bool delete_();
    virtual bool mkdirs();
    virtual FileArray* listFiles();
    virtual FileArray* listFiles(FilenameFilter* filter);
    virtual ::java::lang::StringArray* list();
    virtual ::java::lang::StringArray* list(FilenameFilter* filter);
    virtual int64_t lastModified();

private:
    static int64_t openDir(::java::lang::String* path);
    static int64_t lastModified(::java::lang::String* path);
    static ::java::lang::String* readDir(int64_t handle);
    static int64_t closeDir(int64_t handle);

    // Generated

public:
    File(::java::lang::String* path);
    File(::java::lang::String* parent, ::java::lang::String* child);
    File(File* parent, ::java::lang::String* child);
protected:
    File(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& FileSeparator();

public:
    static ::java::lang::String*& separator();

private:
    static ::java::lang::String*& PathSeparator();

public:
    static ::java::lang::String*& pathSeparator();

private:
    virtual ::java::lang::Class* getClass0();
    friend class File_Pair;
};
