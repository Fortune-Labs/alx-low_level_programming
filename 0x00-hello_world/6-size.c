#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int int_type;
long int double_type;
long long int long_double_type;
char char_type;
float float_type;

printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char_type));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(int_type));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(double_type));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(long_double_type));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(float_type));
return (0);
}
