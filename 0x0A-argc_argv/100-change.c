#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A proogram that prints the minimum number of c to
 * make change for an a of money
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */
int main(int argc, char **argv)
{
int a, c = 0;

if (argc == 2)
{
a = atoi(argv[1]);
if (a < 0)
{
printf("%d\n", 0);
return (0);
}
if (a % 25 >= 0)
{
c += a / 25;
a = a % 25;
}
if (a % 10 >= 0)
{
c += a / 10;
a = a % 10;
}
if (a % 5 >= 0)
{
c += a / 5;
a = a % 5;
}
if (a % 2 >= 0)
{
c += a / 2;
a = a % 2;
}
if (a % 1 >= 0)
c += a;
printf("%d\n", c);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
