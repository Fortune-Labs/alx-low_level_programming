#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the string _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char text[8] = "_putchar";
int t;

for (t = 0; t < 8; t++)
_putchar(text[t]);

_putchar('\n');

return (0);
}
