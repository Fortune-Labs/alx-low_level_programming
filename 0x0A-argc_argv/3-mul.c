#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int number1, number2, res;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
res = number1 * number2;
printf("%d\n", res);
return (0);
}
}
