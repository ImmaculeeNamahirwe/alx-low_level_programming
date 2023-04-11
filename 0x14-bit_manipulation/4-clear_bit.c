#include "main.h"

/**
 * clear_bit - sets a bit at a specific index to have a value of 0.
 * @n: An indication of the bit.
 * @index: The value should be set at index, which starts at 0.
 *
 * Return: If an error happens - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
