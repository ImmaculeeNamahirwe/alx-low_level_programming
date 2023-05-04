#include "main.h"

/**
 * get_bit - Obtains a bit's value at a specified index.
 * @n: The bit.
 * @index: The value index, where indices begin at 0.
 *
 * Return: If an error happens - -1.
 *         If not, the bit value at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
