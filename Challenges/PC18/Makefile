# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming challenge 18
# Date completed: 04-09-2014


FLAGS = -Wall -Wextra -Werror -pedantic

PC18: SList.o SLNode.o PC18.o
	g++ $(FLAGS) SList.o SLNode.o PC18.o -o PC18
	
PC18.o: PC18.cpp
	g++ -c $(FLAGS) PC18.cpp -o PC18.o
	
SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o 

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f PC18

