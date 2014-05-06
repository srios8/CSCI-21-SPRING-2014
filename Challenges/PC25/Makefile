# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming challenge 25
# Date completed: 05-06-2014


FLAGS = -Wall -Wextra -Werror -pedantic

PC25: BSTNode.o PC25.o
	g++ $(FLAGS) BSTNode.o PC25.o -o PC25
	
PC25.o: PC25.cpp
	g++ -c $(FLAGS) PC25.cpp -o PC25.o

BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f PC25

