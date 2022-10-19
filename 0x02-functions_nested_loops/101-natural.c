#include <stdio.h>

/**
 * main - Entry point
 * a program that computes and prints the sum
 * of all multiples of 3 and 5 below 1024
 * folowed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, sum_multiples = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 5) == 0 || (i % 3) == 0)
sum_multiples += i;
}
printf("%d\n", sum_multiples);
return (0);
}
