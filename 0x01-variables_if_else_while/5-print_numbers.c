#include <stdio.h>

/**
 * main - Entry point of the code.
 * Description: This program prints single digit numbers
 * of base 10 starting from 0.
 *
 * Return: Always (0).
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	printf("%d\n", num);
	num++;
	}
	return (0);
}

