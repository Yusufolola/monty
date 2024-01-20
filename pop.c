#include "monty.h"
/**
 * f_pop - prints the top element
 * @head: stack head element 
 * @counter: line_number
 * Return: no return value
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *new;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new = *head;
	*head = new->next;
	free(new);
}
