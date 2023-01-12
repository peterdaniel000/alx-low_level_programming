#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	char dan = 'a'
	int count;
	int x;

	while (x < 10)
	{
		for (dan = 'a'; dan <= 'z'; dan++)
		{
			_putchar(dan);
		}
		_putchar('\n');
		x++;
	}
}
