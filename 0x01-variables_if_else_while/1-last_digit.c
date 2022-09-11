#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry Point for this program. It checks the last digit of n
 *
 * Return: When it returns (0) then it's success
 */
int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}
