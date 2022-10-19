#include <stdio.h>

/**
 * main - Entry point
 * a progra that finds and prints the sum
 * of the even-valued terms, followed by
 * a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int t;
long int fib[50], sum = 2;

fib[0] = 1;
fib[1] = 2;
for (t = 2; t < 50; t++)
{
fib[t] = fib[t - 1] + fib[t - 2];
if ((fib[t] % 2) == 0 && fib[t] < 4000000)
sum += fib[t];
}
printf("%ld\n", sum);
return (0);
}

