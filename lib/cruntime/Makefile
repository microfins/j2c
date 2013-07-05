INCLUDES := $(INCLUDES) -Isrc -Iext/src
EXTRA_LIBS ?= -l$(NAME)-ext

CPPFLAGS := $(CPPFLAGS) $(INCLUDES)
CFLAGS := $(CFLAGS) -g -pipe
CXXFLAGS := $(CFLAGS) -std=gnu++11

BIN := bin
OBJ := obj

NAME := runtime

LIB = lib$(NAME).a
EXT_LIB = lib$(NAME)-ext.a

LIBS = $(BIN)/$(LIB) $(BIN)/$(EXT_LIB)

SRC = src
STUB = stub
NATIVE = native

SRCS = \
	src/avian/Addendum.cpp \
	src/avian/AnnotationInvocationHandler.cpp \
	src/avian/Assembler.cpp \
	src/avian/Assembler_MethodData.cpp \
	src/avian/Atomic.cpp \
	src/avian/Callback.cpp \
	src/avian/CallbackReceiver.cpp \
	src/avian/Cell.cpp \
	src/avian/ClassAddendum.cpp \
	src/avian/Classes.cpp \
	src/avian/ConstantPool.cpp \
	src/avian/ConstantPool_ClassPoolEntry.cpp \
	src/avian/ConstantPool_FieldRefPoolEntry.cpp \
	src/avian/ConstantPool_IntegerPoolEntry.cpp \
	src/avian/ConstantPool_MethodRefPoolEntry.cpp \
	src/avian/ConstantPool_NameAndTypePoolEntry.cpp \
	src/avian/ConstantPool_PoolEntry.cpp \
	src/avian/ConstantPool_StringPoolEntry.cpp \
	src/avian/ConstantPool_Utf8PoolEntry.cpp \
	src/avian/Continuations.cpp \
	src/avian/Continuations_Continuation.cpp \
	src/avian/Continuations_UnwindResult.cpp \
	src/avian/FieldAddendum.cpp \
	src/avian/IncompatibleContinuationException.cpp \
	src/avian/Iso88591.cpp \
	src/avian/Machine.cpp \
	src/avian/MethodAddendum.cpp \
	src/avian/OpenJDK.cpp \
	src/avian/PersistentSet.cpp \
	src/avian/PersistentSet_Iterator.cpp \
	src/avian/PersistentSet_Node.cpp \
	src/avian/PersistentSet_Path.cpp \
	src/avian/PersistentSet_PersistentSet_1.cpp \
	src/avian/Singleton.cpp \
	src/avian/Stream.cpp \
	src/avian/SystemClassLoader.cpp \
	src/avian/Traces.cpp \
	src/avian/Traces_startTraceListener_1.cpp \
	src/avian/Utf8.cpp \
	src/avian/VMClass.cpp \
	src/avian/VMField.cpp \
	src/avian/VMMethod.cpp \
	src/avian/avianvmresource/Handler.cpp \
	src/avian/avianvmresource/Handler_ResourceConnection.cpp \
	src/avian/avianvmresource/Handler_ResourceInputStream.cpp \
	src/avian/file/Handler.cpp \
	src/avian/file/Handler_FileURLConnection.cpp \
	src/avian/http/Handler.cpp \
	src/avian/jar/Handler.cpp \
	src/avian/jar/Handler_MyJarURLConnection.cpp \
	src/java/io/BufferedInputStream.cpp \
	src/java/io/BufferedOutputStream.cpp \
	src/java/io/BufferedReader.cpp \
	src/java/io/BufferedWriter.cpp \
	src/java/io/ByteArrayInputStream.cpp \
	src/java/io/ByteArrayOutputStream.cpp \
	src/java/io/ByteArrayOutputStream_Cell.cpp \
	src/java/io/Closeable.cpp \
	src/java/io/EOFException.cpp \
	src/java/io/Externalizable.cpp \
	src/java/io/File.cpp \
	src/java/io/FileDescriptor.cpp \
	src/java/io/FileInputStream.cpp \
	src/java/io/FileNotFoundException.cpp \
	src/java/io/FileOutputStream.cpp \
	src/java/io/FileReader.cpp \
	src/java/io/FileWriter.cpp \
	src/java/io/File_Pair.cpp \
	src/java/io/FilenameFilter.cpp \
	src/java/io/FilterOutputStream.cpp \
	src/java/io/Flushable.cpp \
	src/java/io/IOException.cpp \
	src/java/io/InputStream.cpp \
	src/java/io/InputStreamReader.cpp \
	src/java/io/LineNumberReader.cpp \
	src/java/io/NotSerializableException.cpp \
	src/java/io/ObjectInput.cpp \
	src/java/io/ObjectOutput.cpp \
	src/java/io/ObjectStreamException.cpp \
	src/java/io/OutputStream.cpp \
	src/java/io/OutputStreamWriter.cpp \
	src/java/io/PrintStream.cpp \
	src/java/io/PrintStream_Static.cpp \
	src/java/io/PrintWriter.cpp \
	src/java/io/PushbackReader.cpp \
	src/java/io/RandomAccessFile.cpp \
	src/java/io/Reader.cpp \
	src/java/io/Serializable.cpp \
	src/java/io/StreamCorruptedException.cpp \
	src/java/io/StringReader.cpp \
	src/java/io/StringWriter.cpp \
	src/java/io/UnsupportedEncodingException.cpp \
	src/java/io/Writer.cpp \
	src/java/lang/AbstractMethodError.cpp \
	src/java/lang/Appendable.cpp \
	src/java/lang/ArithmeticException.cpp \
	src/java/lang/ArrayIndexOutOfBoundsException.cpp \
	src/java/lang/ArrayStoreException.cpp \
	src/java/lang/AssertionError.cpp \
	src/java/lang/Boolean.cpp \
	src/java/lang/Byte.cpp \
	src/java/lang/CharSequence.cpp \
	src/java/lang/Character.cpp \
	src/java/lang/Class.cpp \
	src/java/lang/ClassCastException.cpp \
	src/java/lang/ClassLoader.cpp \
	src/java/lang/ClassNotFoundException.cpp \
	src/java/lang/CloneNotSupportedException.cpp \
	src/java/lang/Cloneable.cpp \
	src/java/lang/Comparable.cpp \
	src/java/lang/Deprecated.cpp \
	src/java/lang/Double.cpp \
	src/java/lang/Enum.cpp \
	src/java/lang/Error.cpp \
	src/java/lang/Exception.cpp \
	src/java/lang/ExceptionInInitializerError.cpp \
	src/java/lang/Float.cpp \
	src/java/lang/IllegalAccessError.cpp \
	src/java/lang/IllegalAccessException.cpp \
	src/java/lang/IllegalArgumentException.cpp \
	src/java/lang/IllegalMonitorStateException.cpp \
	src/java/lang/IllegalStateException.cpp \
	src/java/lang/IllegalThreadStateException.cpp \
	src/java/lang/IncompatibleClassChangeError.cpp \
	src/java/lang/IndexOutOfBoundsException.cpp \
	src/java/lang/InheritableThreadLocal.cpp \
	src/java/lang/InstantiationError.cpp \
	src/java/lang/InstantiationException.cpp \
	src/java/lang/Integer.cpp \
	src/java/lang/InterruptedException.cpp \
	src/java/lang/Iterable.cpp \
	src/java/lang/LinkageError.cpp \
	src/java/lang/Long.cpp \
	src/java/lang/Math.cpp \
	src/java/lang/NegativeArraySizeException.cpp \
	src/java/lang/NoClassDefFoundError.cpp \
	src/java/lang/NoSuchFieldError.cpp \
	src/java/lang/NoSuchFieldException.cpp \
	src/java/lang/NoSuchMethodError.cpp \
	src/java/lang/NoSuchMethodException.cpp \
	src/java/lang/NullPointerException.cpp \
	src/java/lang/Number.cpp \
	src/java/lang/NumberFormatException.cpp \
	src/java/lang/Object.cpp \
	src/java/lang/OutOfMemoryError.cpp \
	src/java/lang/Override.cpp \
	src/java/lang/Package.cpp \
	src/java/lang/Process.cpp \
	src/java/lang/ReflectiveOperationException.cpp \
	src/java/lang/Runnable.cpp \
	src/java/lang/Runtime.cpp \
	src/java/lang/RuntimeException.cpp \
	src/java/lang/RuntimePermission.cpp \
	src/java/lang/Runtime_MyProcess.cpp \
	src/java/lang/Runtime_exec_1.cpp \
	src/java/lang/SecurityException.cpp \
	src/java/lang/SecurityManager.cpp \
	src/java/lang/Short.cpp \
	src/java/lang/StackOverflowError.cpp \
	src/java/lang/StackTraceElement.cpp \
	src/java/lang/String.cpp \
	src/java/lang/StringBuffer.cpp \
	src/java/lang/StringBuilder.cpp \
	src/java/lang/StringBuilder_Cell.cpp \
	src/java/lang/String_1.cpp \
	src/java/lang/SuppressWarnings.cpp \
	src/java/lang/System.cpp \
	src/java/lang/System_Property.cpp \
	src/java/lang/Thread.cpp \
	src/java/lang/ThreadDeath.cpp \
	src/java/lang/ThreadGroup.cpp \
	src/java/lang/ThreadLocal.cpp \
	src/java/lang/Thread_State.cpp \
	src/java/lang/Thread_UncaughtExceptionHandler.cpp \
	src/java/lang/Throwable.cpp \
	src/java/lang/UnsatisfiedLinkError.cpp \
	src/java/lang/UnsupportedOperationException.cpp \
	src/java/lang/VirtualMachineError.cpp \
	src/java/lang/Void.cpp \
	src/java/lang/annotation/Annotation.cpp \
	src/java/lang/annotation/ElementType.cpp \
	src/java/lang/annotation/Retention.cpp \
	src/java/lang/annotation/RetentionPolicy.cpp \
	src/java/lang/annotation/Target.cpp \
	src/java/lang/ref/PhantomReference.cpp \
	src/java/lang/ref/Reference.cpp \
	src/java/lang/ref/ReferenceQueue.cpp \
	src/java/lang/ref/SoftReference.cpp \
	src/java/lang/ref/WeakReference.cpp \
	src/java/lang/reflect/AccessibleObject.cpp \
	src/java/lang/reflect/AnnotatedElement.cpp \
	src/java/lang/reflect/Array_.cpp \
	src/java/lang/reflect/Constructor.cpp \
	src/java/lang/reflect/Field.cpp \
	src/java/lang/reflect/InvocationHandler.cpp \
	src/java/lang/reflect/InvocationTargetException.cpp \
	src/java/lang/reflect/Member.cpp \
	src/java/lang/reflect/Method.cpp \
	src/java/lang/reflect/Modifier.cpp \
	src/java/lang/reflect/Proxy.cpp \
	src/java/lang/reflect/Type.cpp \
	src/java/math/BigInteger.cpp \
	src/java/math/MathContext.cpp \
	src/java/math/RoundingMode.cpp \
	src/java/net/DatagramSocket.cpp \
	src/java/net/InetAddress.cpp \
	src/java/net/InetSocketAddress.cpp \
	src/java/net/JarURLConnection.cpp \
	src/java/net/MalformedURLException.cpp \
	src/java/net/ProtocolFamily.cpp \
	src/java/net/ServerSocket.cpp \
	src/java/net/Socket.cpp \
	src/java/net/SocketAddress.cpp \
	src/java/net/SocketException.cpp \
	src/java/net/StandardProtocolFamily.cpp \
	src/java/net/URL.cpp \
	src/java/net/URLClassLoader.cpp \
	src/java/net/URLConnection.cpp \
	src/java/net/URLStreamHandler.cpp \
	src/java/net/UnknownHostException.cpp \
	src/java/net/UnknownServiceException.cpp \
	src/java/nio/ArrayByteBuffer.cpp \
	src/java/nio/Buffer.cpp \
	src/java/nio/ByteBuffer.cpp \
	src/java/nio/ByteOrder.cpp \
	src/java/nio/DirectByteBuffer.cpp \
	src/java/nio/FixedArrayByteBuffer.cpp \
	src/java/nio/ReadOnlyBufferException.cpp \
	src/java/nio/channels/Channel.cpp \
	src/java/nio/channels/Channels.cpp \
	src/java/nio/channels/Channels_InputStreamChannel.cpp \
	src/java/nio/channels/Channels_MyInputStream.cpp \
	src/java/nio/channels/Channels_MyOutputStream.cpp \
	src/java/nio/channels/Channels_OutputStreamChannel.cpp \
	src/java/nio/channels/ClosedSelectorException.cpp \
	src/java/nio/channels/DatagramChannel.cpp \
	src/java/nio/channels/DatagramChannel_Handle.cpp \
	src/java/nio/channels/GatheringByteChannel.cpp \
	src/java/nio/channels/ReadableByteChannel.cpp \
	src/java/nio/channels/SelectableChannel.cpp \
	src/java/nio/channels/SelectionKey.cpp \
	src/java/nio/channels/Selector.cpp \
	src/java/nio/channels/ServerSocketChannel.cpp \
	src/java/nio/channels/ServerSocketChannel_Handle.cpp \
	src/java/nio/channels/SocketChannel.cpp \
	src/java/nio/channels/SocketChannel_Handle.cpp \
	src/java/nio/channels/SocketSelector.cpp \
	src/java/nio/channels/UnsupportedAddressTypeException.cpp \
	src/java/nio/channels/WritableByteChannel.cpp \
	src/java/security/AccessControlException.cpp \
	src/java/security/AccessController.cpp \
	src/java/security/AllPermission.cpp \
	src/java/security/BasicPermission.cpp \
	src/java/security/CodeSource.cpp \
	src/java/security/Permission.cpp \
	src/java/security/PermissionCollection.cpp \
	src/java/security/Permissions.cpp \
	src/java/security/Permissions_MyPermissionCollection.cpp \
	src/java/security/PrivilegedAction.cpp \
	src/java/security/ProtectionDomain.cpp \
	src/java/security/SecurityPermission.cpp \
	src/java/security/cert/Certificate.cpp \
	src/java/text/DateFormatSymbols.cpp \
	src/java/text/FieldPosition.cpp \
	src/java/text/Format.cpp \
	src/java/text/MessageFormat.cpp \
	src/java/util/AbstractCollection.cpp \
	src/java/util/AbstractList.cpp \
	src/java/util/AbstractMap.cpp \
	src/java/util/AbstractQueue.cpp \
	src/java/util/AbstractSequentialList.cpp \
	src/java/util/AbstractSet.cpp \
	src/java/util/ArrayList.cpp \
	src/java/util/Arrays.cpp \
	src/java/util/Arrays_asList_2.cpp \
	src/java/util/Arrays_sort_1.cpp \
	src/java/util/BitSet.cpp \
	src/java/util/BitSet_MaskInfo.cpp \
	src/java/util/BitSet_MaskInfoIterator.cpp \
	src/java/util/Calendar.cpp \
	src/java/util/Calendar_MyCalendar.cpp \
	src/java/util/Collection.cpp \
	src/java/util/Collections.cpp \
	src/java/util/Collections_ArrayListIterator.cpp \
	src/java/util/Collections_IteratorEnumeration.cpp \
	src/java/util/Collections_KeyIterator.cpp \
	src/java/util/Collections_ReverseComparator.cpp \
	src/java/util/Collections_SynchronizedCollection.cpp \
	src/java/util/Collections_SynchronizedIterator.cpp \
	src/java/util/Collections_SynchronizedMap.cpp \
	src/java/util/Collections_SynchronizedSet.cpp \
	src/java/util/Collections_UnmodifiableList.cpp \
	src/java/util/Collections_UnmodifiableMap.cpp \
	src/java/util/Collections_UnmodifiableSet.cpp \
	src/java/util/Collections_ValueIterator.cpp \
	src/java/util/Comparator.cpp \
	src/java/util/ConcurrentModificationException.cpp \
	src/java/util/Date.cpp \
	src/java/util/EnumSet.cpp \
	src/java/util/EnumSet_EnumSetIterator.cpp \
	src/java/util/Enumeration.cpp \
	src/java/util/EventListener.cpp \
	src/java/util/EventObject.cpp \
	src/java/util/HashMap.cpp \
	src/java/util/HashMap_Cell.cpp \
	src/java/util/HashMap_EntrySet.cpp \
	src/java/util/HashMap_Helper.cpp \
	src/java/util/HashMap_KeySet.cpp \
	src/java/util/HashMap_MyCell.cpp \
	src/java/util/HashMap_MyHelper.cpp \
	src/java/util/HashMap_MyIterator.cpp \
	src/java/util/HashMap_Values.cpp \
	src/java/util/HashSet.cpp \
	src/java/util/HashSet_MyIterator.cpp \
	src/java/util/Hashtable.cpp \
	src/java/util/IdentityHashMap.cpp \
	src/java/util/IdentityHashMap_MyHelper.cpp \
	src/java/util/Iterator.cpp \
	src/java/util/LinkedList.cpp \
	src/java/util/LinkedList_Cell.cpp \
	src/java/util/LinkedList_MyIterator.cpp \
	src/java/util/List.cpp \
	src/java/util/ListIterator.cpp \
	src/java/util/Locale.cpp \
	src/java/util/Map.cpp \
	src/java/util/Map_Entry.cpp \
	src/java/util/MissingResourceException.cpp \
	src/java/util/NoSuchElementException.cpp \
	src/java/util/Properties.cpp \
	src/java/util/Properties_InputStreamParser.cpp \
	src/java/util/Properties_Parser.cpp \
	src/java/util/Properties_ReaderParser.cpp \
	src/java/util/PropertyResourceBundle.cpp \
	src/java/util/Queue.cpp \
	src/java/util/Random.cpp \
	src/java/util/RandomAccess.cpp \
	src/java/util/ResourceBundle.cpp \
	src/java/util/Set.cpp \
	src/java/util/SortedSet.cpp \
	src/java/util/Stack.cpp \
	src/java/util/StringTokenizer.cpp \
	src/java/util/TreeMap.cpp \
	src/java/util/TreeMap_KeySet.cpp \
	src/java/util/TreeMap_MyEntry.cpp \
	src/java/util/TreeMap_TreeMap_1.cpp \
	src/java/util/TreeMap_TreeMap_2.cpp \
	src/java/util/TreeMap_Values.cpp \
	src/java/util/TreeSet.cpp \
	src/java/util/TreeSet_MyIterator.cpp \
	src/java/util/TreeSet_TreeSet_1.cpp \
	src/java/util/TreeSet_TreeSet_2.cpp \
	src/java/util/UUID.cpp \
	src/java/util/Vector.cpp \
	src/java/util/WeakHashMap.cpp \
	src/java/util/WeakHashMap_MyCell.cpp \
	src/java/util/WeakHashMap_MyHelper.cpp \
	src/java/util/concurrent/Callable.cpp \
	src/java/util/concurrent/ConcurrentLinkedQueue.cpp \
	src/java/util/concurrent/ConcurrentLinkedQueue_Node.cpp \
	src/java/util/jar/Attributes.cpp \
	src/java/util/jar/Attributes_Name.cpp \
	src/java/util/jar/JarEntry.cpp \
	src/java/util/jar/JarFile.cpp \
	src/java/util/jar/JarFile_JarEntryFactory.cpp \
	src/java/util/jar/JarFile_MyJarEntry.cpp \
	src/java/util/logging/Handler.cpp \
	src/java/util/logging/Level.cpp \
	src/java/util/logging/LogRecord.cpp \
	src/java/util/logging/Logger.cpp \
	src/java/util/logging/Logger_DefaultHandler.cpp \
	src/java/util/regex/Matcher.cpp \
	src/java/util/regex/Pattern.cpp \
	src/java/util/zip/CRC32.cpp \
	src/java/util/zip/DataFormatException.cpp \
	src/java/util/zip/Deflater.cpp \
	src/java/util/zip/DeflaterOutputStream.cpp \
	src/java/util/zip/Inflater.cpp \
	src/java/util/zip/InflaterInputStream.cpp \
	src/java/util/zip/ZipEntry.cpp \
	src/java/util/zip/ZipFile.cpp \
	src/java/util/zip/ZipFile_EntryFactory.cpp \
	src/java/util/zip/ZipFile_MyEntry.cpp \
	src/java/util/zip/ZipFile_MyEnumeration.cpp \
	src/java/util/zip/ZipFile_MyInputStream.cpp \
	src/java/util/zip/ZipFile_MyZipEntry.cpp \
	src/java/util/zip/ZipFile_Window.cpp \
	src/java/util/zip/ZipFile_ZipEntryFactory.cpp \
	src/java/util/zip/ZipFile_getInputStream_1.cpp \
	src/sun/misc/Cleaner.cpp \
	src/sun/misc/Unsafe.cpp \
	src/sun/reflect/ConstantPool.cpp \


STUB_SRCS = \


NATIVE_SRCS = \
	native/avian/Atomic-native.cpp \
	native/avian/Classes-native.cpp \
	native/avian/Continuations-native.cpp \
	native/avian/Continuations_Continuation-native.cpp \
	native/avian/Machine-native.cpp \
	native/avian/Singleton-native.cpp \
	native/avian/SystemClassLoader-native.cpp \
	native/avian/avianvmresource/Handler_ResourceInputStream-native.cpp \
	native/java/io/File-native.cpp \
	native/java/io/FileInputStream-native.cpp \
	native/java/io/FileOutputStream-native.cpp \
	native/java/io/RandomAccessFile-native.cpp \
	native/java/lang/Double-native.cpp \
	native/java/lang/Float-native.cpp \
	native/java/lang/Math-native.cpp \
	native/java/lang/Object-native.cpp \
	native/java/lang/Runtime-native.cpp \
	native/java/lang/String-native.cpp \
	native/java/lang/System-native.cpp \
	native/java/lang/Thread-native.cpp \
	native/java/lang/Throwable-native.cpp \
	native/java/lang/reflect/Array_-native.cpp \
	native/java/lang/reflect/Constructor-native.cpp \
	native/java/lang/reflect/Field-native.cpp \
	native/java/lang/reflect/Method-native.cpp \
	native/java/net/InetAddress-native.cpp \
	native/java/net/Socket-native.cpp \
	native/java/nio/ByteOrder-native.cpp \
	native/java/nio/FixedArrayByteBuffer-native.cpp \
	native/java/nio/channels/DatagramChannel-native.cpp \
	native/java/nio/channels/ServerSocketChannel-native.cpp \
	native/java/nio/channels/SocketChannel-native.cpp \
	native/java/nio/channels/SocketSelector-native.cpp \
	native/java/util/Date-native.cpp \
	native/java/util/zip/Deflater-native.cpp \
	native/java/util/zip/Inflater-native.cpp \
	native/sun/misc/Unsafe-native.cpp \


EXT_SRCS = \


EXT_STUB_SRCS = \


EXT_NATIVE_SRCS = \


MAIN_SRCS = \


MAINS = $(MAIN_SRCS:$(SRC)/%-main.cpp=$(BIN)/%)
OBJS = $(SRCS:$(SRC)/%.cpp=$(OBJ)/%.o)
STUB_OBJS = $(STUB_SRCS:$(STUB)/%.cpp=$(OBJ)/%.o)
NATIVE_OBJS = $(NATIVE_SRCS:$(NATIVE)/%.cpp=$(OBJ)/%.o)

EXT_OBJS = $(EXT_SRCS:ext/$(SRC)/%.cpp=$(OBJ)/%.o)
EXT_STUB_OBJS = $(EXT_STUB_SRCS:ext/$(STUB)/%.cpp=$(OBJ)/%.o)
EXT_NATIVE_OBJS = $(EXT_NATIVE_SRCS:ext/$(NATIVE)/%.cpp=$(OBJ)/%.o)

all: $(LIBS)

define cc-command
@mkdir -p $(dir $@); 
@echo Compile $<; $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
endef

$(OBJS):$(OBJ)/%.o: $(SRC)/%.cpp | print-opts
	$(cc-command)
	
$(STUB_OBJS):$(OBJ)/%.o: $(STUB)/%.cpp | print-opts
	$(cc-command)

$(NATIVE_OBJS):$(OBJ)/%.o: $(NATIVE)/%.cpp | print-opts
	$(cc-command)

$(EXT_OBJS):$(OBJ)/%.o: ext/$(SRC)/%.cpp | print-opts
	$(cc-command)

$(EXT_STUB_OBJS):$(OBJ)/%.o: ext/$(STUB)/%.cpp | print-opts
	$(cc-command)

$(EXT_NATIVE_OBJS):$(OBJ)/%.o: ext/$(NATIVE)/%.cpp | print-opts
	$(cc-command)

%.a:
	@echo Archive $@
	@mkdir -p $(dir $@)
	@rm -f $@
	@ar rcs $@ $^

$(BIN)/$(LIB): $(OBJS) $(STUB_OBJS) $(NATIVE_OBJS)

$(BIN)/$(EXT_LIB): $(EXT_OBJS) $(EXT_STUB_OBJS) $(EXT_NATIVE_OBJS)

$(MAINS):$(BIN)/%:$(SRC)/%-main.cpp $(LIBS)
	@mkdir -p $(dir $@); 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -L$(BIN) -o $@ $< -l$(NAME) $(EXTRA_LIBS)

mains: $(MAINS)

clean:
	rm -rf $(OBJ) $(BIN)

print-opts:
	@echo Building with \"$(CXX) $(CPPFLAGS) $(CXXFLAGS)\"
	
.PHONY: all mains clean print-opts
