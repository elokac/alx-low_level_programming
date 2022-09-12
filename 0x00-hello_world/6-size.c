#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: (0) means success
 */

int main(void)
{
	char ch;
	int i;
	long int longi;
	long long int longlongi;
	float fl;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longi));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongi));
	printf("Size of a float: %lu byte(s)\n", sizeof(fl));
	return (0);
}
