#include "main.h"

/**
 * set_bit - this set the bit at given index to 1
 * @n: pointer to numb to change
 * @index: index of the bit set to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
