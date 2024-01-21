#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head element
 * @counter: line_number
 * Return: no return vlaue
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *new;
	int len = 0, find;

	new = *head;
	while (new)
	{
		new = new->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new = *head;
	find = new->n + new->next->n;
	new->next->n = find;
	*head = new->next;
	free(new);
}
