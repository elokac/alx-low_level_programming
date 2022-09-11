#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point for this program that prints out the lowercase Alphabets
 *
 * Return: When it returns (0) then it's a success
 */
int main(void)
{
	char lower_alphabets;

	for (lower_alphabets = 'a'; lower_alphabets <= 'z'; lower_alphabets++)
	{
		if (lower_alphabets != 'e' && lower_alphabets != 'q')
			putchar(lower_alphabets);
	}
	putchar('\n');

	return (0);
}
