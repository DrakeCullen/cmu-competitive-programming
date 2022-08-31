COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
FLOOD = floodFill.o
CPP_FLOOD = floodFill.cpp 


clean:
	rm -f $(HELLO) $(TIMELOOP) *.o

floodFill:
	rm -f $(FLOOD) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FLOOD) -o $(FLOOD)
	./$(FLOOD)
