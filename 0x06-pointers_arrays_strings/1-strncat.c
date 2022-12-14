#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int srcl = 0, loop_var = 0;
char *temp = dest, *start = src;

while (*src)
{
srcl++;
src++;
}

while (*dest)
dest++;

if (n > srcl)
n = srcl;

src = start;

for (; loop_var < n; loop_var++)
*dest++ = *src++;

*dest = '\0';
return (temp);
}
