all: build
	

build: 02.cpp mylib.cpp clean
	
	g++ 02.cpp mylib.cpp -o main

test:
	g++ -o test_program mytest.cpp mylib.cpp  -lgtest -lgtest_main -pthread
	./test_program

clean: 
	rm -rf main 
	rm -rf test_program