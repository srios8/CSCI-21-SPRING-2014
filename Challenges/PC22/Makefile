FLAGS = -Wall -Werror -Wextra -pedantic

PC22: PC22.o  
	g++ $(FLAGSFLAGS) PC22.o -o PC22

PC22.o: PC22.cpp SList.h SLNode.h
	g++ $(FLAGS) -c PC22.cpp -o PC22.o

clean:
	rm *.o