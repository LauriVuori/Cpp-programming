#Here we specify compiler
CC = g++
#Here we define include dir
INCLUDE = ./include
SRC=./src/
#This is for debugging purposes
#CFLAGS = -g -c -Wall -I$(INCLUDE)
#This is for release purposes
#CFLAGS = -O -c -Wall -I$(INCLUDE)

#Here we define compilation flags. 
#-c is to create the .o file(s)
#-I is to include the header directory 
CFLAGS = -c -I$(INCLUDE)

LIBS=-lncurses


#We could have also mentioned the list of source files 
#SOURCES =  profession.cpp employee.cpp main.cpp

#$(patsubst pattern,replacement,text)
#Below we assume that the .cpp source files are under $(SRC) directory
OBJECTS := $(patsubst %.cpp,%.o,$(wildcard $(SRC)*.cpp))

#Here we rename object files by replacing .cpp by .o of files.
#OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = runStudents

#Here we define all rule and its dependencies
all: $(OBJECTS) $(EXECUTABLE)

# The $@ refers to the left side of : 
$(EXECUTABLE) : $(OBJECTS)
		$(CC) $(OBJECTS) -o $@ $(LIBS)

#The $< refers to the first item in the dependency list
#The $@ refers the target file, file.o.
#This is a suffix rule telling how to turn .cpp into .o file
.cpp.o: *.h
	$(CC) $(CFLAGS) $< -o $@

clean :
	-rm -f $(OBJECTS) $(EXECUTABLE)


#Here we define a new rule by combining two predefined rules
reset: all clean