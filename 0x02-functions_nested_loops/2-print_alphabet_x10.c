#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	char dan = 'a';

	for (dan = 'a'; dan <= 'z'; dan++)
	{
		for (dan = 0; dan <= 10; dan++)
		{
			printf("%d", dan);
		}
		_putchar(dan);
	}
	_putchar('\n');
}
