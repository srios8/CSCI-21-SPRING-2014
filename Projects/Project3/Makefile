# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming project 3
# Date completed: 04-25-2014

#
# Grader comments 2014.05.15
# cleanall option needs to clean everything, including the .o files
#
FLAGS = -Wall -Werror -Wextra -pedantic -Wno-newline-eof

Project3: Project3.o  
	g++ $(FLAGSFLAGS) Project3.o -o Project3

Project3.o: Project3.cpp DLList.h DLNode.h
	g++ $(FLAGS) -c Project3.cpp -o Project3.o

clean:
	rm *.o

cleanall:
	rm -f Project3