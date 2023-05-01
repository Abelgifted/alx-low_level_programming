#include "lists.h"

/**
 * free_listint - Used to free linkedlist
 * @head: listint_t list that you want to be freed
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
