COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
UFDS = ufds.o
CPP_UFDS = ufds.cpp 


ufds:
	rm -f $(UFDS) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_UFDS) -o $(UFDS)
	./$(UFDS)
