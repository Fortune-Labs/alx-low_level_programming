#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int mum, a, b;
for (mum = '0'; mum < '9'; mum++)
{
for (a = mum + 1; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if ((a != mum) != b)
{
putchar(mum);
putchar(a);
putchar(b);
if (mum == '7' && a == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
