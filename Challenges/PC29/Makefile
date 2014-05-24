FLAGS = -Wall -Werror -Wextra -pedantic

PC29: PC29.o TreasureChest.o
	g++ $(FLAGS) PC29.o TreasureChest.o -o PC29

PC29.o: PC29.cpp
	g++ $(FLAGS) -c PC29.cpp -o PC29.o

TreasureChest.o: TreasureChest.h TreasureChest.cpp
	g++ -c $(FLAGS) TreasureChest.cpp -o TreasureChest.o

clean:
	rm *.o

cleanall: clean
	rm -f PC29