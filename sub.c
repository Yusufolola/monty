#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *find;
	int sub, nodes;

	finf = *head;
	for (nodes = 0; find != NULL; nodes++)
		find = find->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	find = *head;
	sub = find->next->n - find->n;
	find->next->n = sub;
	*head = find->next;
	free(find);
}
