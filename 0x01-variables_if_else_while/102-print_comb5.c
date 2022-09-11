#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point for this program
 * that prints out the 2 digits number
 *
 * Return: When it returns (0) then it's a success
 */
int main(void)
{
	int f, m;

	for (f = 0; f < 100; f++)
	{
		for (m = f + 1; m < 100; m++)
		{
			putchar(f / 10 + '0');
			putchar(f % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (f == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
