#include "main.h"

/**
 * flip_bits - this will count the num of bits that will change
 * get one num to the other
 * @n: first numb
 * @m: second num
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
