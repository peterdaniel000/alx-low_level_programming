#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: int parameter
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
