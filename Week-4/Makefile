COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
DEQUE = deque.o
CPP_DEQUE = deque.cpp 
PRIORITYQUE = priorityQueue.o
CPP_PRIORITYQUE = priorityQueue.cpp 

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

