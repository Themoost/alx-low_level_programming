#include <stdio.h>

/**
 * main - Entry point of the code.
 * Description: This program ptints all single digit
 * numbers of base 10 starting from 0.
 *
 * Return: Always (0).
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
