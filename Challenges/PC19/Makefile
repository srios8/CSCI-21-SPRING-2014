# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming challenge 19
# Date completed: 04-14-2014


FLAGS = -Wall -Wextra -Werror -pedantic

PC19: SList.o SLNode.o PC19.o
	g++ $(FLAGS) SList.o SLNode.o PC19.o -o PC19
	
PC19.o: PC19.cpp
	g++ -c $(FLAGS) PC19.cpp -o PC19.o
	
SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o 

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f PC19

