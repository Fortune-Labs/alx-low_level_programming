#include "main.h"

/**
 * print_last_digit - Check 7-print_last_digit.c
 * @r: An integer input
 * Description: This function prints the last digit of a postive_num
 * Return: last digit of postive_num r
 */
int print_last_digit(int r)
{
int positive_num, last_digit;
last_digit = r % 10;

if (last_digit < 0)
positive_num = -1 * last_digit;
else
positive_num = last_digit;

_putchar(positive_num + '0');
return (positive_num);
}

