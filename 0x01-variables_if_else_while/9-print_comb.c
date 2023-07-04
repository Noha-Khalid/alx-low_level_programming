#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
