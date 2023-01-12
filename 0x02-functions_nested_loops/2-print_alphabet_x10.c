#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	char dan[26] = "abcdefghijklmnopqrstuvwxyz";
	int count;
	int x;

	while (x < 10)
	{
		for (count = 0; count <= 10; count++)
		{
			_putchar(dan[count]);
		}
		_putchar('\n');
		x++;
	}
}
