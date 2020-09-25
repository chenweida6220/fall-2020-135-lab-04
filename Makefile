main: main.o allFuncs.o
	g++ -o main main.o allFuncs.o

main.o: main.cpp allFuncs.h
	g++ -c main.cpp

allFuncs.o: allFuncs.cpp allFuncs.h
	g++ -c allFuncs.cpp

# "make clean" at the end to remove executables
clean:
	rm -f main main.o allFuncs.o
