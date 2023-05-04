#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal num
 * @n: The num to print in binary
 */

void print_binary(unsigned long int n)
{
int t, count = 0;
unsigned long int current;

for (t = 63; t >= 0; t--)
{
current = n >> t;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
