#include "lists.h"

/**
 * find_listint_loop - Search the loop in a linkedlist
 * @head: The linkedlist to search for
 *
 * Return: The address of node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
