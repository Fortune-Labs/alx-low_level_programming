#include "main.h"

/**
 * _isupper - A function that checks for up_case character.
 * @c: An input character
 * Return: 1 if c is up_case or 0 otherwise
 */
int _isupper(int c)
{
char up_case = 'A';
int isupper = 0;

for (; up_case <= 'Z'; up_case++)
{
if (c == up_case)
{
isupper = 1;
break;
}
}

return (isupper);
}