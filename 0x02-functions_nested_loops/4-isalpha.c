#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
char low, up;
int letter = 0;

for (low = 'a'; low <= 'z'; low++)
{
for (up = 'A'; up <= 'Z'; up++)
{
if (c == low || c == up)
letter = 1;
}
}
return (letter);
}
