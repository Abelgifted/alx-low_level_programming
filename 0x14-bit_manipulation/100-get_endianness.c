#include "main.h"

/**
 * get_endianness - checks the  machine if it is little or big endian
 * Return: 0 on big, 1 on little
 */

int get_endianness(void)
{
unsigned int w = 1;
char *c = (char *) &w;

return (*c);
}
