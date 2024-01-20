rotl.c
#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *use = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (use->next != NULL)
	{
		use = tmp->next;
	}
	use->next = *head;
	(*head)->next = NULL;
	(*head)->prev = use;
	(*head) = aux;
}
