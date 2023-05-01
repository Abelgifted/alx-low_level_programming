#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node inside linkedlist at a certain index
 * @head: points to first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on Success, or -1 on Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int w = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (w < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
w++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
