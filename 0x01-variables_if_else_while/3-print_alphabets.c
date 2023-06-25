#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase and uppercase alphabets.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
