#include "main.h"

/**
 * main - Entry point of a program
 *
 * it prints _putchar followed by new line
 *
 * Return: returns (0) if success
 *
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
