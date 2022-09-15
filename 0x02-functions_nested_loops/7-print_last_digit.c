#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@i: input number to be tested
 * Return: returns the last digit of the number
 */

int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = (-1 * i);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}

