#include <stdio.h>

/**
 * main - Entry point of the code.
 * Description: This program prints all the letters of the
 * alphabets in loercase except q and e.
 *
 * Return: Always (0).
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
