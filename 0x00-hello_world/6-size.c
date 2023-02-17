#include <stdio.h>
/**
 * main - A program that print the size of computer types
 * Return: 0
*/
imt main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float f;

	printf("size of char: %lu byte(s)\n", unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", unsigned long)sizeof(b));
	printf("size of long: %lu byte(s)\n", unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", unsigned long)sizeof(f));
	return (0);
}

