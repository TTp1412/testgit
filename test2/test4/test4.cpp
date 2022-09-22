// test4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int a, b,c,d;	
	printf("Input a: ");
	scanf_s("%d", &a);
	printf("Input b: ");
	scanf_s("%d", &b);
	printf("Input c: ");
	scanf_s("%d", &c);
	printf("Input :d ");
	scanf_s("%d", &d);
	printf("%d > %d => %d\n", a, b, a > b);
	printf("%d = %d => %d\n", a, b, a == b);
	int n1 = (a > b) && (c > d); //khong can ngoac tron
	printf("n1 = %d\n", n1);
	int n2 = a > b || c > d;
	printf("n2 = %d\n",n2);
	int n = n1 ^ n2;
	printf("n = %d\n", n);
	int f = 28;
	printf("f= %x",f);
	return 0;
}
