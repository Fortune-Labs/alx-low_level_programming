#include "main.h"

/**
 * main - check 100-times_table.c
 * Description: function that prints the n times table, starting with 0
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
int a, b;
if (n > 0 && n < 15)
{
for (a = 0; a <= n; a++)
{
_putchar('0');
for (b = 1; b <= n; b++)
putformat(a * b);
_putchar('\n');
}
}
}

/**
 * main - Check putformat
 * Description: function that formats output of a*b
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
if (n <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else if (n > 9 && n <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(n / 100 + '0');
_putchar(n / 10 % 10 + '0');
_putchar(n % 10 + '0');
}
}

