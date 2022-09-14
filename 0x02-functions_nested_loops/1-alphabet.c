#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: returns (0) if sucess
 */

void print_alphabet(void)
{
	char l_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
	{
		_putchar(l_alpha);
	}
	_putchar('\n');
}
