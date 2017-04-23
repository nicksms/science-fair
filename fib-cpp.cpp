#include <iostream>
int fib(int n);
int main() 
{
	int c = 0;
	while (1) {
		std::cout << fib(c) << "\n";
		c++;
	}
	return 0;
}

int fib(int n)
{
	return ((n<2)?n:(fib(n-1)+fib(n-2)));
}
