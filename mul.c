#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head element
 * @counter: line_number
 * Return: no return value
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new = *head;
	find = new->next->n * new->n;
	new->next->n = find;
	*head = new->next;
	free(new);
}
