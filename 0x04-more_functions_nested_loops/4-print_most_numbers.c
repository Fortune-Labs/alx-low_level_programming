#include "mai.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
int loop_var = '0';

for (; loop_var <= '9'; loop_var++)
{
if (loop_var != '2' && loop_var != '4')
_putchar(loop_var);
}
_putchar('\n');
}
