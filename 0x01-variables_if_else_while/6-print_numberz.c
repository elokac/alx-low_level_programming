#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the Entry Point for this program that prints
 * single-digit numbers from 0 to 9
 *
 * Return: When it returns (0) then it's success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar(num);

	return (0);
}
