all: build
	

build: 01.cpp mylib.cpp
	g++ 01.cpp mylib.cpp -o main

test:
	g++ -o test_program mytest.cpp mylib.cpp  -lgtest -lgtest_main -pthread

clean: 
	rm -rf main 
	rm -rf test_program