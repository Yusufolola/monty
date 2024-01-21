#include "monty.h"
/**
 * f_queue - prints the top item
 * @head: head stack element
 * @counter: line_number
 * Return: no return value
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack elements
 * @n: new_value to be added
 * @head: head of the stack
 * Return: no return value 
*/
void addqueue(stack_t **head, int n)
{
	stack_t *newNode, *find;

	find = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = n;
	newNode->next = NULL;
	if (find)
	{
		while (find->next)
			find = find->next;
	}
	if (!find)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		find->next = newNode;
		newNode->prev = find;
	}
}
