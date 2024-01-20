#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: stack head
 * @n: new_value
 * Return: no return value
*/
void addnode(stack_t **head, int n)
{

	stack_t *newNode, *join;

	join = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (join)
		join->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
