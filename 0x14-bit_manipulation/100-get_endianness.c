#include "main.h"

/**
 * get_endianness - the endianness is verified.
 *
 * Return: 0 if big-endian.
 *         if little-endian, then one.
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
