#include <stdio.h>
/**
 * swap_int - swap integer a and b
 * @a: pointer int a
 * @b: pointer int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
