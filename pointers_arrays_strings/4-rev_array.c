#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements in the array
 *
 * This function reverses the order of the elements in the array
 * pointed to by @a. The first element becomes the last, the
 * second becomes the second-to-last, and so on, in place.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
