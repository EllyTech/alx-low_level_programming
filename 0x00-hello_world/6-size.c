#include <stdio.h>
/**
 * main - A program that prints the siz of various computer types 
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c; 
	long long int d;
	float f;

printf("Size of a char: %1u byte(s)\n", (usigned long)
sizeof(a));
printf("Size of a int: %1u byte(s)\n", (usigned long)
sizeof(b));
printf("Size of a long int: %1u byte(s)\n", (usigned long)
sizeof(c));
printf("Size of a long long int: %1u byte(s)\n", (usigned long)
sizeof(d));
printf("Size of a float: %1u byte(s)\n", (usigned long)
sizeof(f));
return (0);
