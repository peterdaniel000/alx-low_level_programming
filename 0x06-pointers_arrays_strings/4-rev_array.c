#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: int parameter
 * @n: int parameter
 * Return: int
 */
void reverse_array(int *a, int n)
{
int i;
int j;
i = n - 1;
j = 0;
for (j = 0; j < i; j++)
{
a[j] ^= a[i];
a[i] ^= a[j];
a[j] ^= a[i];
i--;
}
}
