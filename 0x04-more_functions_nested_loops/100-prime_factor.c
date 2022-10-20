#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
unsigned long int t = 3, n = 612852475143;

for (; t < 12057; t += 2)
{
while (n % t == 0 && n != t)
n = n / t;
}
printf("%lu\n", n);
return (0);
}
