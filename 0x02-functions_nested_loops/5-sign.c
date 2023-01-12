#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: int parameter
 * Return: int
 */

int print_sign(int n)
{
	int i;

	for (i = 0; i <= 135; i++)
	{
		if (i > n)
		{
			return (1);
		}
		else if (i < n)
		{
			return (-1);
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
