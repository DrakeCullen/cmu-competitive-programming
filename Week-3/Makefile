COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
SORT = sorting.o
CPP_SORT = sorting.cpp 
SEARCHING = searching.o
CPP_SEARCHING = searching.cpp 
STACK = stack.o
CPP_STACK = stack.cpp 
QUEUE = queue.o
CPP_QUEUE = queue.cpp 
STRINGSTREAM = stringstream.o
CPP_STRINGSTREAM = stringstream.cpp 


clean:
	rm -f $(HELLO) $(TIMELOOP) *.o

sorting:
	rm -f $(SORT) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_SORT) -o $(SORT)
	./$(SORT)


searching:
	rm -f $(SEARCHING) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_SEARCHING) -o $(SEARCHING)
	./$(SEARCHING)


stack:
	rm -f $(STACK) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_STACK) -o $(STACK)
	./$(STACK)

queue:
	rm -f $(QUEUE) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_QUEUE) -o $(QUEUE)
	./$(QUEUE)

stringstream:
	rm -f $(STRINGSTREAM) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_STRINGSTREAM) -o $(STRINGSTREAM)
	./$(STRINGSTREAM)