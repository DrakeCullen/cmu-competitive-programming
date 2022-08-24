COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
HELLO = hello.o
CPP_HELLO = hello.cpp 
TIMELOOP = timeloop.o
CPP_TIMELOOP = timeloop.cpp 


clean:
	rm -f $(HELLO) $(TIMELOOP) *.o

hello:
	rm -f $(HELLO) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_HELLO) -o $(HELLO)
	./$(HELLO) | diff - ./output/hello1.out
	echo "All Hello World sample tests cases passed!"

timeloop:
	rm -f $(TIMELOOP) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_TIMELOOP) -o $(TIMELOOP)
	cat ./input/timeloop1.in | ./$(TIMELOOP) | diff - ./output/timeloop1.out
	cat ./input/timeloop2.in | ./$(TIMELOOP) | diff - ./output/timeloop2.out
	echo "All Timeloop sample tests cases passed!"

all: clean hello timeloop
