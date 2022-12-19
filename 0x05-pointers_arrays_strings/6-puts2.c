#include <stdio.h>
#include <string.h>

/**
 * puts2 - print
 * @str: char parameter
 * Return: Nothing
 */

void puts2(char *str)
{
int i;
int num;

num = strlen(str);
i = 0;
while (i <= num - 1)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');
}
