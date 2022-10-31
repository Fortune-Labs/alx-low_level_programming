#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int t = 0, max = size * size, sum1 = 0, sum2 = 0;

for (; t < max; t += size + 1)
sum1 += a[t];

for (t = size - 1; t < max - 1; t += size - 1)
sum2 += a[t];

printf("%d, %d\n", sum1, sum2);
}
