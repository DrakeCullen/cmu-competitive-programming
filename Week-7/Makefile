COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
FLOOD = floodFill.o
CPP_FLOOD = floodFill.cpp 

floodFill:
	rm -f $(FLOOD) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FLOOD) -o $(FLOOD)
	./$(FLOOD)
