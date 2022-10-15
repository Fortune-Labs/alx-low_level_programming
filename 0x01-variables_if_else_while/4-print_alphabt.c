#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l, ee, qu;
ee = 'e';
qu = 'q';
for (l = 'a'; l <= 'z'; l++)
{
if (l != ee && l != qu)
putchar(l);
}
putchar('\n');
return (0);
}
