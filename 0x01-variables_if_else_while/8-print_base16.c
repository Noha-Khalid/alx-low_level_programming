#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48; /* 48: decimal rep of '0' */

	while (digit <= 102) /* 102: decimal rep of 'f' */
	{
		putchar(digit);

		/* After '9', jump to 'a' */
		if (digit == 57)
			digit = 97;
		else
			digit++;

	}

	putchar('\n');

	return (0);
}
