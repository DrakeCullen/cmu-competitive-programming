COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
SORT = sorting.o
CPP_SORT = sorting.cpp 
SEARCHING = searching.o
CPP_SEARCHING = searching.cpp 

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