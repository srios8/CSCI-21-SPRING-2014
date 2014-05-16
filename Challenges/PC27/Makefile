FLAGS = -Wall -Werror -Wextra -pedantic

PC27: PC27.o BSTree.o BSTNode.o
	g++ $(FLAGS) PC27.o BSTree.o BSTNode.o -o PC27

PC27.o: PC27.cpp
	g++ $(FLAGS) -c PC27.cpp -o PC27.o
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o
	
BSTree.o: BSTree.h BSTree.cpp
	g++ -c $(FLAGS) BSTree.cpp -o BSTree.o

clean:
	rm *.o
	
cleanall: clean
	rm -f PC27