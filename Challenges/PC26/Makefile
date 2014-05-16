FLAGS = -Wall -Werror -Wextra -pedantic

PC26: PC26.o BSTree.o BSTNode.o
	g++ $(FLAGS) PC26.o BSTree.o BSTNode.o -o PC26

PC26.o: PC26.cpp
	g++ $(FLAGS) -c PC26.cpp -o PC26.o
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o
	
BSTree.o: BSTree.h BSTree.cpp
	g++ -c $(FLAGS) BSTree.cpp -o BSTree.o

clean:
	rm *.o
	
cleanall: clean
	rm -f PC26