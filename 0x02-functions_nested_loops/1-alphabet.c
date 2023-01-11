#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: null
 */

void print_alphabet(void)
{
	char dan = 'a';

	for (dan = 'a'; dan <= 'z'; dan++)
	{
		_putchar(dan);
	}
	_putchar('\n');
}
