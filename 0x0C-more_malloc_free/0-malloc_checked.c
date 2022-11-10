#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
int *pt;

pt = malloc(b);

if (pt == NULL)
exit(98);

return (pt);
}
