#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 after function run
 */

int main(void)
{
char ch = 'a';
char chN = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
printf("\n");

for (chN = 'A'; chN <= 'Z'; chN++)
putchar(chN);
printf("\n");
return (0);
}
