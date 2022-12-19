#include <stdio.h>

/**
 * print_array - print n array
 * @a: int parameter
 * @n: int parameter
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i = 0;

if (n > 0)
{
printf("%d", a[i]);
i++;
n--;
}
for (n > 0; n--;)
{
printf("%d", a[i]);
i++;
}
printf("\n");
}
