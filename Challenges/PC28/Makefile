FLAGS = -Wall -Werror -Wextra -pedantic

PC28: PC28.o Item.o FoodItem.o
	g++ $(FLAGS) PC28.o Item.o FoodItem.o -o PC28

PC28.o: PC28.cpp
	g++ $(FLAGS) -c PC28.cpp -o PC28.o
	
Item.o: Item.h Item.cpp
	g++ -c $(FLAGS) Item.cpp -o Item.o
	
FoodItem.o: FoodItem.h FoodItem.cpp
	g++ -c $(FLAGS) FoodItem.cpp -o FoodItem.o
	
MagicItem.o: MagicItem.h MagicItem.cpp
	g++ -c $(FLAGS) MagicItem.cpp -o MagicItem.o

clean:
	rm *.o
	
cleanall: clean
	rm -f PC28