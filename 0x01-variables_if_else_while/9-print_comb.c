#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point for this program
 * that prints out numbers fro 0-9 with space and ,
 *
 * Return: When it returns (0) then it's a success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
