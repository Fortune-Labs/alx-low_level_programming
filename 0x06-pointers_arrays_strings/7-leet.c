#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
int a = 0, b;
char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

while (s[a])
{
for (b = 0; b < 10; b++)
if (s[a] == str[b])
s[a] = subs[b];

a++;
}

return (s);
}
