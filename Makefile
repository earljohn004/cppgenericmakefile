# ------------------------------------------------
# Generic Makefile for C++
# author: Earl John Abaquita
# -----------------------------------------------
#  NOTES: 
#  create necessary folders
#  1. bin 	= location of executable file.
#  2. src	= location of source files and header files.
#  3. obj	= location of object files to be used in linking
#
#  IMPORTANT VARIABLES and QUICK DEFINITION
#
#  TARGET  		change to the project name
#  LIBRARIES  	add the necessary libraries of the current project
#
#  IMPORTANT CLFAGS
#  -DEBUG_TOOL = when using the defined macro for debugging
#  -TEST_MODE = when using the unit_framework
# ------------------------------------------------

# project name (generate executable with this name)
TARGET   = TestApplication

# change these to set the proper directories where each files shoould be
SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin
INCDIR	 = inc

# ---------------------
# Compiler variables

CC       = g++

# Change the version
CCVERSION = -std=c++17
# compiling flags here
CFLAGS   =	-Wall\
   			-g\
			-I$(INCDIR)/ \
			-DDEBUG_TOOL \
			-DTEST_MODE


# linking flags here
LFLAGS   = -Wall\

# Compiler variables end
# ---------------------

# add needed libraries
LIBRARIES := 

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm       = rm -f

$(BINDIR)/$(TARGET): $(OBJECTS)
	@echo "$(CC) -o $@ $(OBJECTS) $(LFLAGS) $(LIBRARIES)"
	@$(CC) -o $@ $(OBJECTS) $(LIBRARIES)
	@echo -e "\nBuild Success"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CCVERSION) $(CFLAGS) -c -o $@ $<
	@echo "generating... $@  $<"

# add 1 argument to unit at make execution
# make unittest unit=src/logic.cpp
.PHONEY: unittest
unittest:
	$(eval OBJVAR=$(subst cpp,o,$(unit)))
	$(eval OBJVAR=$(subst src,obj,$(OBJVAR)))
	$(eval TESTVAR=$(subst src,test,$(unit)))
	$(eval TESTVAR=$(subst .cpp,_unit_test.cpp,$(TESTVAR)))
	$(eval TESTVAROBJ=$(subst test/,obj/,$(TESTVAR)))
	$(eval TESTVAROBJ=$(subst cpp,o,$(TESTVAROBJ)))


	@if $(CC) $(CCVERSION) $(CFLAGS) -c -o $(OBJVAR) $(unit); then \
		echo generating $(OBJVAR) completed; \
	   	else \
		echo File does not exist; exit 1;\
   	fi

	@if $(CC) $(CCVERSION) $(CFLAGS) -I$(SRCDIR) -c -o $(TESTVAROBJ) $(TESTVAR); then \
		echo generating $(TESTVAROBJ) completed;\
		else \
	   	echo [ERROR] create a unit test file.; exit 1;\
	fi

	@$(CC) -o bin/$@ $(OBJVAR) $(TESTVAROBJ)
	@$(BINDIR)/$@

.PHONEY: clean
clean:
	@$(rm) $(OBJECTS)
	@$(rm) $(BINDIR)/*
	@echo "Cleanup complete!"


.PHONEY: run
run:
	@$(BINDIR)/$(TARGET)
