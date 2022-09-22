
#include <stdio.h>

int main()
{
	int a, b, c;
	a = b = c = 5;
	printf("a = %d\nb = %d\nc = %d", a, b, c);
	int d = a++ + ++b;
	printf("\na = %d b = %d d = %d", a, b, d);
	a = b = c = 5;
	a += b;
	printf("\na = %d b = %d", a, b);
	printf("\n%d", a < b);
	return 0;
}
