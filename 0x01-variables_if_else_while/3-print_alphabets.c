#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point for this program that prints lower/uppercase Alphabets
 *
 * Return: When it returns (0) then it's a success
 */
int main(void)
{
	char lower_alphabets;
	char upper_alphabets;

	for (lower_alphabets = 'a'; lower_alphabets <= 'z'; lower_alphabets++)
	{
		putchar(lower_alphabets);
	}

	for (upper_alphabets = 'A'; upper_alphabets <= 'Z'; upper_alphabets++)
	{
		putchar(upper_alphabets);
	}
	putchar('\n');

	return (0);
}
