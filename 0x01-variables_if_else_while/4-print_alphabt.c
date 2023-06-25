#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints .
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
