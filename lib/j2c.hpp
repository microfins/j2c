/**
 * Core implementation of the "virtual machine" - really of course there is no VM,
 * these methods are called by the Java code when they would normally have invoked
 * the JVM via JNI. We must implement them here in regular C++.
 */

#pragma once

#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>
#include <java/lang/String.hpp>

#include <Array.hpp>
#include <SubArray.hpp>

namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
}
}

using namespace java::lang;

// Must be called before any Java-translated code is used.
void init_jvm();

// Convert the given null terminated string in the default platform locale to a
// java::lang::String*. The provided C string is copied first.
String *c2jstr(char *cstr);

// Converts the given C style arguments list to a Java String[].
StringArray* make_args(int args, char** argv);

// Synchronize keyword support:
void lock(Object *);
void unlock(Object *);

// Support for creating Java strings from constant string literals in C++.
String *java::lang::operator "" _j(const char16_t * p, size_t n);

// Called when an unimplemented native stub is hit. Aborts.
void unimplemented_(const char16_t *name);