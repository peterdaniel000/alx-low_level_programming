#include "main.h"

/**
 * _islower - entry point
 *
 * @c: int parameter
 * Return: int
 */

int _islower(int c)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
