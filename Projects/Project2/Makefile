FLAGS = -Wall -Wextra -Werror -pedantic  

Project2: Prize.o Box.o Project2.o
	g++ $(FLAGS) Prize.o Box.o Project2.o -o Project2
  
Project2.o: Project2.cpp
	g++ -c $(FLAGS) Project2.cpp -o Project2.o
  
Box.o: Box.h Box.cpp
	g++ -c $(FLAGS) Box.cpp -o Box.o
  
Prize.o: Prize.h Prize.cpp
	g++ -c $(FLAGS) Prize.cpp -o Prize.o
    
clean:                                          
	rm -f *.o
    
cleanall: clean
	rm -f Project2