#include "lists.h"

/**
 * listint_len - returns the num of elements in  linkedlists
 * @h: linkedlist of type listint_t to traverse
 *
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}