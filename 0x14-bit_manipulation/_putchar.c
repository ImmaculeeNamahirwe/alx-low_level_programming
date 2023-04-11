#include "main.h"
#include <unistd.h>

/**
 * _putchar - character c is being converted to stdout
 * @c: Pint the character
 *
 * Return: success 1
 * On error, Errno is set appropriately and a value of -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
