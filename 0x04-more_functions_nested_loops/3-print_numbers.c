#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + '0');
		num++;
	} while (num <= 9);

	_putchar('\n');
}
