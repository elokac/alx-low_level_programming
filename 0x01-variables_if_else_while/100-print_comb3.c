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
	int f, l;

	for (f = '0'; f <= '9'; f++)
	{
		for (l = f + 1; l <= '9'; l++)
		{
			if (f != l)
			{
				putchar(f);
				putchar(l);

				if (f == '8' && l == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
