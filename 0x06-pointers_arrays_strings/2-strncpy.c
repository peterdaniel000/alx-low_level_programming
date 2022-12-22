#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - more on string
 * @dest: char parameter
 * @src: char parameter
 * @n: int char
 * Return: char string
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
