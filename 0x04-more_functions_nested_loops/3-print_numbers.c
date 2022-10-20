#include "mai.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
int loop_var = '0';

for (; loop_var <= '9'; loop_var++)
_putchar(loop_var);
_putchar('\n');
}