#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: the string
 * Return: int
 */

int _atoi(char *s)
{
int value = 0;
int j = 0;
int isum = 0;
int sign = 1;

for (; s[j]; j++)
{
if (s[j] == '-')
sign *= -1;
if (s[j] >= '0' && s[j] <= '9')
{
if (sign < 1)
{
isum = 1;
value *= 10;
value += -(s[j] - '0');
continue;
}
else
{
isum = 1;
value *= 10;
value += s[j] - '0';
continue;
}
}
else if (isum)
{
j++;
break;
}
}
return (value);
}
