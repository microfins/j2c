RUNTIME_SOURCES := ../ctest/src
INCLUDES := $(INCLUDES) -I$(RUNTIME_SOURCES)

CPPFLAGS := $(CPPFLAGS) $(INCLUDES)
CFLAGS := $(CFLAGS) -g -pipe
CXXFLAGS := $(CFLAGS) -std=gnu++11

OBJ := obj

SRCS = \
	j2c.cpp \
	java-lang.cpp \
	java-io.cpp \


OBJS = $(SRCS:%.cpp=$(OBJ)/%.o)

define cc-command
@mkdir -p $(dir $@);
@echo Compile $<; $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
endef

all: j2c-runtime.a


$(OBJS):$(OBJ)/%.o: %.cpp | print-opts
	$(cc-command)

%.a: $(OBJS)
	@echo Archive $@
	@mkdir -p $(dir $@)
	@rm -f $@
	@ar rcs $@ $^

print-opts:
	@echo Building with \"$(CXX) $(CPPFLAGS) $(CXXFLAGS)\"

.PHONY: all mains clean print-opts
