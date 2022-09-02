COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
UFDS = ufds.o
CPP_UFDS = ufds.cpp 


clean:
	rm -f $(HELLO) $(TIMELOOP) *.o

ufds:
	rm -f $(UFDS) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_UFDS) -o $(UFDS)
	./$(UFDS)
