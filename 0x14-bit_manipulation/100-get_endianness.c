#include "main.h"

/**
 * get_endianness - will check if a machine is a small or large endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
