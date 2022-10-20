#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
int loop_var1 = 0, loop_var2, m = size - 1;

if (size > 0)
{
for (; loop_var1 < size; loop_var1++)
{
for (loop_var2 = 0; loop_var2 < size; loop_var2++)
{
if (loop_var2 < m)
_putchar(' ');
else
_putchar('#');
}
m--;
_putchar('\n');
}
}
else
_putchar('\n');
}
