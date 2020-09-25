main: main.o allFuncs.o
	g++ -o main main.o allFuncs.o

main.o: main.cpp allFuncs.h
	g++ -c main.cpp

allFuncs.o: allFuncs.cpp allFuncs.h
	g++ -c allFuncs.cpp

clean:
	rm -f main.o allFuncs.o
