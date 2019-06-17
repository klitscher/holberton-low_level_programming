#include "sort.h"

/**
 * partition - partitions array using loumuto method
 * @array: array to sort
 * @size: size of array
 * @hi: number of elements in the array
 * @lo: 0
 *
 *Return: pivot index + 1
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int pivot = array[hi], i = lo - 1, j, temp;

	(void)size;
	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	print_array(array, size);
	temp = array[i + 1];
	array[i + 1] = array[hi];
	array[hi] = temp;

	return (i + 1);
}

/**
 * q_sort - sorts an array using quick-sort
 * @array: array to sort
 * @size: size of array
 * @lo: 0
 * @hi: size of array - 1
 *
 * Return: void
 */
void q_sort(int *array, size_t size, int lo, int hi)
{
	int p_index;

	if (lo < hi)
	{
		p_index = partition(array, size, lo, hi);
		q_sort(array, size, lo, p_index - 1);
		q_sort(array, size, p_index + 1, hi);
	}
}
/**
 * quick_sort - sorts an array with the lomuto partition scheme
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0, hi = size - 1;

	q_sort(array, size, lo, hi);
}
