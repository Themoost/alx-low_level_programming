#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point of the of the program
 * Description: This function assigns a random value to the variable n.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		pritf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}



