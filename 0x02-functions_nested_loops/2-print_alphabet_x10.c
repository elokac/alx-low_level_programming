#include "main.h"

/**
 * print_alphabet_x10 - Entry point of a program that print aplphabet 10 times
 *
 * Return- returns x10 a-z
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}
}
