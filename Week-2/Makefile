COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
BASIC = vectorBasic.o
CPP_BASIC = vectorBasic.cpp 
INIT = vectorInitialize.o
CPP_INIT = vectorInitialize.cpp 
UPDATE = vectorUpdate.o
CPP_UPDATE = vectorUpdate.cpp 
TYPES = vectorTypes.o
CPP_TYPES = vectorTypes.cpp 


vectorBasic:
	rm -f $(BASIC) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_BASIC) -o $(BASIC)
	./$(BASIC)

vectorInitialize:
	rm -f $(INIT) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_INIT) -o $(INIT)
	./$(INIT)

vectorUpdate:
	rm -f $(UPDATE) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_UPDATE) -o $(UPDATE)
	./$(UPDATE)

vectorTypes:
	rm -f $(TYPES) *.o
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_TYPES) -o $(TYPES)
	./$(TYPES)