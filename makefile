main: main.cpp
	 g++ main.cpp myMath.h -O3 -o main
	
run: main
	./main

clean:
	rm main