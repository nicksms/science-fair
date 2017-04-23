#include <stdio.h>

int main()
{
	printf("What's your name?\n");
	char name[100];
	scanf("%s", name);
	printf("Hello, %s\n", name);
	return 0;
}
