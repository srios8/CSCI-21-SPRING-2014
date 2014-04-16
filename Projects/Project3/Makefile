# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming project 3
# Date completed: 04-25-2014


FLAGS = -Wall -Wextra -Werror -pedantic

Project3: DLList.o DLNode.o Project3.o
	g++ $(FLAGS) DLList.o DLNode.o Project3.o -o Project3
	
Project3.o: Project3.cpp
	g++ -c $(FLAGS) Project3.cpp -o Project3.o
	
DLList.o: DLList.h DLList.cpp
	g++ -c $(FLAGS) DLList.cpp -o DLList.o 

SLNode.o: DLNode.h DLNode.cpp
	g++ -c $(FLAGS) DLNode.cpp -o DLNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f Project3

