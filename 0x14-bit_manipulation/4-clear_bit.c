#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: point the num to change
 * @index: bit index to clear
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
