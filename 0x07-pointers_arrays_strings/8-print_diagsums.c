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
int a = 0, end = size * size, sum_1 = 0, sum_2 = 0;

for (; a < end; a += size + 1)
sum_1 += a[a]; 

for (a = size - 1; a < end - 1; a += size - 1)
sum_2 += a[a];

printf("%d, %d\n", sum_1, sum_2);
}
