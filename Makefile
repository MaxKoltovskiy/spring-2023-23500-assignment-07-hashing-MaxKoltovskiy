OBJECTS = Dictionary.o List.o Node.o Person.o 

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)
tests: tests.o $(OBJECTS) 
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp Dictionary.h List.h Node.h Person.h
Dictionary.o: Dictionary.cpp Dictionary.h List.h Node.h Person.h
List.o: List.cpp List.h Node.h Person.h
Node.o: Node.cpp Node.h Person.h
Person.o: Person.cpp Person.h
tests.o: tests.cpp Dictionary.h List.h Node.h Person.h doctest.h

clean: 
	rm -f *.o
