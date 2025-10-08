main: ForwardStrategy.o ReverseStrategy.o RandomStrategy.o FibonacciStrategy.o Storage.o
	g++ -g -std=c++98 -Wall -Werror ForwardStrategy.o ReverseStrategy.o RandomStrategy.o FibonacciStrategy.o Storage.o main.cpp -o main



ForwardStrategy.o: ForwardStrategy.h ForwardStrategy.cpp
	g++ -g -std=c++98 -Wall -Werror -c ForwardStrategy.cpp -o ForwardStrategy.o

ReverseStrategy.o: ReverseStrategy.h ReverseStrategy.cpp
	g++ -g -std=c++98 -Wall -Werror -c ReverseStrategy.cpp -o ReverseStrategy.o

RandomStrategy.o: RandomStrategy.h RandomStrategy.cpp
	g++ -g -std=c++98 -Wall -Werror -c RandomStrategy.cpp -o RandomStrategy.o

FibbonacciStrategy.o: FibonacciStrategy.h FibonacciStrategy.cpp
	g++ -g -std=c++98 -Wall -Werror -c FibonacciStrategy.cpp -o FibonacciStrategy.o

clean:
	rm -f *.o main

run: main
	./main
mem:
	valgrind --leak-check=full ./main
