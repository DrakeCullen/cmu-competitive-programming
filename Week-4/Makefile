COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
DEQUE = deque.o
CPP_DEQUE = deque.cpp 
PRIORITYQUE = priorityQueue.o
CPP_PRIORITYQUE = priorityQueue.cpp 
SET = set.o
CPP_SET = set.cpp 
MAP = map.o
CPP_MAP = map.cpp 


clean:
	rm -f $(HELLO) $(TIMELOOP) *.o

deque:
	rm -f $(DEQUE) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_DEQUE) -o $(DEQUE)
	./$(DEQUE)

priorityQueue:
	rm -f $(PRIORITYQUE) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_PRIORITYQUE) -o $(PRIORITYQUE)
	./$(PRIORITYQUE)

set:
	rm -f $(SET) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_SET) -o $(SET)
	./$(SET)

map:
	rm -f $(MAP) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_MAP) -o $(MAP)
	./$(MAP)
