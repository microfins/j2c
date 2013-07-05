OBJ := obj

SRCS = \
	j2c.cpp \
	java-lang.cpp \
	java-io.cpp \

OBJS = $(SRCS:%.cpp=$(OBJ)/%.o)
RUNTIME = libj2c.a

INCLUDES := $(INCLUDES) -Icruntime/src

CPPFLAGS := $(CPPFLAGS) $(INCLUDES)
CFLAGS := $(CFLAGS) -pipe -g
CXXFLAGS := $(CFLAGS) -std=gnu++11

define cc-command
@mkdir -p $(dir $@);
@echo Compile $<; $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
endef

all: $(RUNTIME)

$(OBJS):$(OBJ)/%.o: %.cpp | print-opts
	$(cc-command)

$(RUNTIME): $(OBJS)
	@echo Archive $@
	@rm -f $@
	@ar rcs $@ $(OBJS)

print-opts:
	@echo Building with \"$(CXX) $(CPPFLAGS) $(CXXFLAGS)\"

clean:
	rm -r $(OBJ) libj2c.a

.PHONY: all mains clean print-opts