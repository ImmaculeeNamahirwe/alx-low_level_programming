#include "main.h"

/**
 * set_bit - sets a bit at a specific index to have a value of 1.
 * @n: an indication of the bit.
 * @index: The index at which to set the value; indices begin at 0.
 *
 * Return: If an error happens - -1.
 *         Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
