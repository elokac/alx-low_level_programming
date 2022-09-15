#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * absolute number: this is a non negative number
 * @n: integer input
 * Return: returns absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
