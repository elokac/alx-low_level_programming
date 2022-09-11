#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point for this program
 * that prints out numbers in base 16
 *
 * Return: When it returns (0) then it's a success
 */
int main(void)
{
	char base16_low;

	for (base16_low = '0'; base16_low <= '9'; base16_low++)
	{
		putchar(base16_low);
	}
	for (base16_low = 'a'; base16_low <= 'f'; base16_low++)
	{
		putchar(base16_low);
	}
	putchar('\n');

	return (0);
}
