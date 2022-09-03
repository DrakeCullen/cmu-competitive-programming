COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
FENWICK = fenwick.o
CPP_FENWICK = fenwick.cpp 


fenwick:
	rm -f $(FENWICK) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FENWICK) -o $(FENWICK)
	./$(FENWICK)

