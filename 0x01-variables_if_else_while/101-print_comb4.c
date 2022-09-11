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
	int f, m, l;

	for (f = '0'; f <= '9'; f++)
	{
		for (m = f + 1; m <= '9'; m++)
		{
			for (l = m + 1; l <= '9'; l++)
			{
				if (f != m && f != l && m != l)
				{
					putchar(f);
					putchar(m);
					putchar(l);

					if (f == '7' && m == '8' && l == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
