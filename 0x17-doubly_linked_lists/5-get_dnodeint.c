#include "lists.h"
/**
*get_dnodeint_at_index - gets the nth node of a list
*@head: pointer to the head of the list
*@index: index of the node to get
*Return: pointer to the node, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
return (NULL);
while (head->prev != NULL)
head = head->prev;
i = 0;
while (head != NULL)
{
if (i == index)
break;
head = head->next;
i++;
}
return (head);
}
