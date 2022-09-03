COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
PERMUTATION = permutation.o
CPP_PERMUTATION = permutation.cpp 
SUBSET = subset.o
CPP_SUBSET = subset.cpp


permutation:
	rm -f $(PERMUTATION) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_PERMUTATION) -o $(PERMUTATION)
	./$(PERMUTATION)

subset:
	rm -f $(SUBSET) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_SUBSET) -o $(SUBSET)
	./$(SUBSET)