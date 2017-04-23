#include <iostream>
int main()
{
	std::cout << "What's your name?\n";
	char name[100];
	std::cin >> name;
	std::cout << "Hello, " << name << "\n";
	return 0;
}
