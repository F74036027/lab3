all: A.o B.o Clock.o
	g++ -o A A.o
	g++ -o B B.o Clock.o
A.o:	A.cpp
	g++ -c A.cpp
B.o:	B.cpp Clock.h
	g++ -c B.cpp 
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
