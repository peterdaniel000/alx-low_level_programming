#include "main.h"

/**
 * _isalpha - entry point
 *
 * @c: int parameter
 * Return: int
 */

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	for (j = 65; j <= 90; j++)
	{
		if (j == c)
		{
			return (1);
		}
	}
	return (0);
}
