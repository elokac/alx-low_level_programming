#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the Entry Point for this program
 *
 * Return: When it returns (0) then it's success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("This number %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("This number %d is Zero\n", n);
	}
	else 
	{
		printf("This number %d is negative\n", n);
	}


	return (0);
}
