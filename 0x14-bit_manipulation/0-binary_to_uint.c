#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: string contains of binary num
 *
 * Return: the num that is converted
 */

unsigned int binary_to_uint(const char *b)
{
int t;
unsigned int dec_val = 0;

if (!b)
return (0);

for (t = 0; b[t]; t++)
{
if (b[t] < '0' || b[t] > '1')
return (0);
dec_val = 2 * dec_val + (b[t] - '0');
}

return (dec_val);
}
