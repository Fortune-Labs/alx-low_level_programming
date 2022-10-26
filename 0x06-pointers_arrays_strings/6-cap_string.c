#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int iter = 0;

while (str[iter])
{
while (!(str[iter] >= 'a' && str[iter] <= 'z'))
iter++;

if (str[iter - 1] == ' ' ||
str[iter - 1] == '\t' ||
str[iter - 1] == '\n' ||
str[iter - 1] == ',' ||
str[iter - 1] == ';' ||
str[iter - 1] == '.' ||
str[iter - 1] == '!' ||
str[iter - 1] == '?' ||
str[iter - 1] == '"' ||
str[iter - 1] == '(' ||
str[iter - 1] == ')' ||
str[iter - 1] == '{' ||
str[iter - 1] == '}' ||
iter == 0)
str[iter] -= 32;

iter++;
}

return (str);
}
