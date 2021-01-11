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
#  TARGET  			change to the project name
#  LIBRARIES  		add the necessary libraries of the current project

# project name (generate executable with this name)
#
# ------------------------------------------------

TARGET   = TestApplication

CC       = g++

# Change the version
CCVERSION = -std=c++11

# compiling flags here
CFLAGS   =	-Wall\
   			-g

# linker
LINKER   = g++ -o
# linking flags here
LFLAGS   = -Wall\

# change these to set the proper directories where each files shoould be
SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin

# add needed libraries
LIBRARIES := 
			

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm       = rm -f

$(BINDIR)/$(TARGET): $(OBJECTS)
	@echo "$(CC) -o $@ $(OBJECTS) $(LIBRARIES)"
	@$(CC) -o $@ $(OBJECTS) $(LIBRARIES)
	@echo -e "\nBuild Success"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CCVERSION) $(CFLAGS) -c -o $@ $<
	@echo "generating... $@  $<"

.PHONEY: clean
clean:
	@$(rm) $(OBJECTS)
	@echo "Cleanup complete!"

.PHONEY: remove
remove: clean
	@$(rm) $(BINDIR)/$(TARGET)
	@echo "Executable removed!"
