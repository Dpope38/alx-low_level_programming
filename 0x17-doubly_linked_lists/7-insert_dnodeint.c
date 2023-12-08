#include "lists.h"
/**
*inser_dnodeint_at_index - inserts a new node at a given position
*@h: pointer to the head of the list
*@idx: index of the node to be inserted
*@n: value of the   the new node
*Return: pointer to the new node, Or Null of failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *head, *new;
unsigned int i;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
head = *h;
i = 1;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
if (i == idx)
{
if (head->next == NULL)
new = add_dnodeint(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = head->next;
new->prev = head;
head->next->prev = new;
head->next = new;
}
}
break;
}
head = head->next;
i++;
}
}
return (new);
}
