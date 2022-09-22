

#include <stdio.h>

int main()
{
	char name[20];
	printf("Input your name: ");
	gets_s(name);
	printf("Your name: %s", name);
	return 0;
}

