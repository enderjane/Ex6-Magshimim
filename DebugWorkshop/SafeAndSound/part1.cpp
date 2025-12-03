#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*dest++ = *src++)
		;
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[13]; //was originally sized 12 instead of the needed 13 to copy all of src and stay a string (the text + \0)
	char src[] = "hello world!";

	string_copy(dest, 13, src); //changed 12 to 13 (the actual size of src)

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
