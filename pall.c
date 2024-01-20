#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *new;
	(void)counter;

	new = *head;
	if (new == NULL)
		return;
	while (new)
	{
		printf("%d\n", new->n);
		new = new->next;
	}
}
