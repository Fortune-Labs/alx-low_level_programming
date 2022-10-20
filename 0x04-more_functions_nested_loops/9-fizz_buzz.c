#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
int loop_var = 1;

for (; loop_var < 100 ; loop_var++)
{
if (loop_var % 3 == 0 && loop_var % 5 == 0)
printf("FizzBuzz ");
else if (loop_var % 3 == 0)
printf("Fizz ");
else if (loop_var % 5 == 0)
printf("Buzz ");
else
printf("%d ", loop_var);
}
printf("Buzz\n");

return (0);
}
