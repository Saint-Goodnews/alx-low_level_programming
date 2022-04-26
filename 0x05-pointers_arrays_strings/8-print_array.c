#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 *
 * @a: array reference
 * @n: parameter
 */


void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
if (i == n - 1)
{
printf("%d\n", a[i]);
break;
}
printf("%d, ", a[i]);
i++;
}
if (n <= i)
{
_putchar('\n');
}
}
