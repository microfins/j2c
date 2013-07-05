RUNTIME_SOURCES := ../ctest/src
INCLUDES := $(INCLUDES) -I$(RUNTIME_SOURCES)

CPPFLAGS := $(CPPFLAGS) $(INCLUDES)
CFLAGS := $(CFLAGS) -pipe
CXXFLAGS := $(CFLAGS) -std=gnu++11

OBJ := obj

SRCS = \
	j2c.cpp \
	java-lang.cpp \
	java-io.cpp \

OBJS = $(SRCS:%.cpp=$(OBJ)/%.o)
RUNTIME = libj2c-runtime.a
CLASSLIB = cruntime/libruntime.a

define cc-command
@mkdir -p $(dir $@);
@echo Compile $<; $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
endef

all: $(RUNTIME)

$(OBJS):$(OBJ)/%.o: %.cpp | print-opts
	$(cc-command)

$(CLASSLIB):
	@echo Building Avian class library
	@cd cruntime; make CFLAGS="$(CFLAGS)"

$(RUNTIME): $(OBJS) $(CLASSLIB)
	@echo Archive $@
	@rm -f $@
	@ar rcs $@ $(OBJS) `find cruntime/obj -type f`

print-opts:
	@echo Building with \"$(CXX) $(CPPFLAGS) $(CXXFLAGS)\"

clean:
	cd cruntime; make clean; cd ..; rm -r $(RUNTIME) $(OBJ)

.PHONY: all mains clean print-opts