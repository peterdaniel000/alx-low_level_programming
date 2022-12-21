#include <stdio.h>
/**
 * main - enty
 *
 * Return: 0 after run function
 */
int main(void)
{
int d;/*my first number*/
int c;/*my second number*/

for (d = 0; d < 100; d++)
{
for (c = 0; c < 100; c++)
{
if (d < c)
{
putchar('0' + d / 10);
putchar('0' + d % 10);
putchar(32);
putchar('0' + c / 10);
putchar('0' + c % 10);
if (d != 98 || c != 99)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
