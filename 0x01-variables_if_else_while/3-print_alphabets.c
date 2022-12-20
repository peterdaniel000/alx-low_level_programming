#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 after function run
 */

int main(void)
{
char ch = 'a';
char n = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
printf("\n");

for (n = 'A'; n <= 'Z'; n++)
putchar(n);
printf("\n");
return (0);
}
