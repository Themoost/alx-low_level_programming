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
		puts("%d is positive", n);
	}
	else if (n < 0)
	{
		puts("%d is negative", n);
	}
	else
	{
		puts("%d is zero", n);
	}

	return (0);
}



