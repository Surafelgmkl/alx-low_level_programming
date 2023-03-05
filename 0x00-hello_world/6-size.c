#include <stdio.h>
/**
 * main -A program that prints the size of various computer type
 * Return 0 (Seccess)
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;
printf("Size of a char: %1 byte(s)\n", (unsigned long)sizeof(1));
printf("Size of an int: %4 byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a long int: %4 bytes(s)\n", (unsigned long)sizeof(4));
printf("Size of a long long int: %8 bytes(s)\n", (unsigned long)sizeof(8));
printf("Size of a float: %4 bytes(s)\n", (unsigned long)sizeof(4));
return (0);
}
