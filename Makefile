CXX = g++
CXXFLAGS = -g -std=c++98 -Wall -Werror

main: main.o
	$(CXX) $(CXXFLAGS) main.o -o main

main.o: main.cpp Storage.h ForwardStrategy.h ReverseStrategy.h RandomStrategy.h FibonacciStrategy.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f *.o main
