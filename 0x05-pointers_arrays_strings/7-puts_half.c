#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half
 * @str: char parameter
 * Return: Nothing
 */

void puts_half(char *str)
{
int lenght = 0;
char *start = str;

while (*str)
{
lenght++;
str++;
}
lenght += 1;
start += lenght / 2;
while (*start)
{
putchar(*(start));
start++;
}
putchar('\n');
}
