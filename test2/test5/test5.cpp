

#include <stdio.h>

int main()
{
	int a = 10;
	float f = 34.555f;
	printf("[%10d]\n", a);
	printf("[%010d]\n", a);
	printf("[%10.2f]", f);
	return 0;
}

