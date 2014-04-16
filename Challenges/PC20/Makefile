# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming challenge 20
# Date completed: 04-16-2014


FLAGS = -Wall -Wextra -Werror -pedantic

PC20: SList.o SLNode.o PC20.o
	g++ $(FLAGS) SList.o SLNode.o PC20.o -o PC20
	
PC20.o: PC20.cpp
	g++ -c $(FLAGS) PC20.cpp -o PC20.o
	
SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o 

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f PC20

