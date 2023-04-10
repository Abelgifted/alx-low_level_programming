#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
int a, b, c, bot, e, intel;

a = 0;
b = 0;
c = 0;
bot = 0;
e = 0;
intel = 0;

while (s[bot] != '\0')
bot++;

while (a < bot && e == 0)
{
if (s[a] == '-')
++d;

if (s[a] >= '0' && s[a] <= '9')
{
intel = s[a] - '0';
if (d % 2)
intel = -intel;
n = n * 10 + intel;
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
e = 0;
}
i++;
}

if (e == 0)
return (0);

return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
