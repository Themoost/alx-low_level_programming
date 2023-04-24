#include <stdio.h>

/**
 * main - Entry point of the code, from a - z and A - Z.
 * Description: This program prints alphabets in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
