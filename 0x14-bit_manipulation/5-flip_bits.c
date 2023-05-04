#include "main.h"

/**
 * flip_bits - calculates the required number of bits
 *             To move from one number to another, flip the coin.
 * @n: The number.
 * @m: To flip n to is this number.
 *
 * Return: The amount of bits that must be changed in order to go from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
