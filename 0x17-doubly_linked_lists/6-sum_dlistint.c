#include "lists.h"
/**
* sum_dlistint - sums all the data of a doubly linked list
* @head: pointer to the head of the list
* Return: the sum of all the data of the list
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
}
