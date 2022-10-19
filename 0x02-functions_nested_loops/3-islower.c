#include "main.h"

/**
 * _islower - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * loop through all lowercase alphabets.
 * compare @c with loop var
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
return (1);
}
return (0);
}

