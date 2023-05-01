#include "lists.h"

/**
 * sum_listint - Result of the sum of all the data in a listint_t list
 * @head: The first node in the linkedlist
 *
 * Return: result of sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
