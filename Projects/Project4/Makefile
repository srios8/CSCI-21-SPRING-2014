# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming project 4
# Date completed: 05-16-2014

FLAGS = -Wall -Werror -Wextra -pedantic -Wno-newline-eof

Project4: Project4.o  Word.o
	g++ $(FLAGSFLAGS) Project4.o  Word.o -o Project4

Project4.o: Project4.cpp BSTNode.h BSTree.h
	g++ $(FLAGS) -c Project4.cpp -o Project4.o
	
Word.o: Word.cpp Word.h
	g++ $(FLAGS) -c Word.cpp -o Word.o

clean:
	rm *.gch *.o

cleanall:
	rm -f Project4