FLAGS = -Wall -Werror -Wextra -pedantic

PC21: PC21.o Box.h
	g++ $(FLAGS) PC21.o  -o PC21

PC21.o: PC21.cpp Box.h
	g++ $(FLAGS) -c PC21.cpp -o PC21.o

clean:
	rm *.o