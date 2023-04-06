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
	printf("%d", n);

	if (n > 0)
	{
		puts("is positive");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	else
	{
		puts("is zero");
	}

	return (0);
}



