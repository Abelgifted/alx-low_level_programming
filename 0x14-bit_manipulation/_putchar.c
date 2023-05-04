#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c character to stdout
 * @c: print the character
 *
 * Return: 1 on success.
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
