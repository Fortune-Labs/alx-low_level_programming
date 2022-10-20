#include "mai.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
char loop_var = '0';
int isdigit = 0;

for (; loop_var <= '9'; loop_var++)
{
if (loop_var == c)
{
isdigit = 1;
break;
}
}
return (isdigit);
}