#include <stdio.h>
int fib(int n);
int main() 
{
	int c = 0;
	while (1) {
		printf("%d\n", fib(c));
		c++;
	}
	return 0;
}

int fib(int n)
{
	return ((n<2)?n:(fib(n-1)+fib(n-2)));
}
