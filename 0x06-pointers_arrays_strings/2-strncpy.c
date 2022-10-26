#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int srcl = 0, i = 0;
char *temp = dest, *start = src;

while (*src)
{
srcl++;
src++;
}

srcl++;
if (n > srcl)
n = srcl;

src = start;

for (; i < n; i++)
*dest++ = *src++;

return (temp);
}
