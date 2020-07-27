bessel:
	g++ -std=c++20 -Wextra -Wall -Werror bessel.cpp -o bessel
	./bessel
debug:
	g++ -std=c++20 -Wextra -Wall -Werror -ggdb bessel.cpp -o bessel
