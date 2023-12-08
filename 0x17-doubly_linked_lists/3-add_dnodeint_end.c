#include "lists.h"
/**
* add_dnodeint_end - add a new node at the end of a dlistint_t list
* @head: pointer to the head of the list
* @n: integer to be added
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;

h = *head;

if (h != NULL)
{
while (h->next != NULL)
h = h->next;
h->next = new;
}
return (new);
}
