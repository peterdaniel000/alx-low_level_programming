#include <stdio.h>

/**
 * swap_int - swap
 * @a: int parameter
 * @b: int parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int dan;
dan = *a;
*a = *b;
*b = dan;
}
