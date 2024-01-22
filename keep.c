#include "monty.h"
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/


bus_t bus = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{	char buffer[A];

    FILE *file;
    stack_t *stack = NULL;
    unsigned int counter = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    bus.file = file;

    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        bus.content = buffer;
        counter++;
        execute(buffer, &stack, counter, file);
    }

    free_stack(stack);
    fclose(file);
    return (0);
}
*/
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}
