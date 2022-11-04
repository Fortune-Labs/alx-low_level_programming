#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int number, res = 0, a;

while (argc-- > 1)
{
for (a = 0; argv[argc][a]; a++)
{
if (!(isdigit(argv[argc][a])))
{
printf("Error\n");
return (1);
}
}
number = atoi(argv[argc]);
res += number;
}
printf("%d\n", res);
return (0);
}
