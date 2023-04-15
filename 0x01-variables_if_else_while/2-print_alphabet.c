#include <stdio.h>

/**
 * main - Entry point of the code, from a - z.
 * Description: this program prints alphabets in lower case.
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

		putchar('\n');
		return (0);
}

