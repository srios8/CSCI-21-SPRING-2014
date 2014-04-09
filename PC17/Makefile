# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Stacy A. Rios-Jimenez
#

# Target for programming challenge 17
# Date completed: 04-07-2014


FLAGS = -Wall -Wextra -Werror -pedantic

PC17: SLNode.o PC17.o
	g++ $(FLAGS) SLNode.o PC17.o -o PC17
	
PC17.o: PC17.cpp
	g++ -c $(FLAGS) PC17.cpp -o PC17.o
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f PC17

