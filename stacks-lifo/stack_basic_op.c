#include "stacks.h"

/**
 * new_stack - returns an empty stack
 *
 * Return: NULL
 */
Stack new_stack(void)
{
	return (NULL);
}

/**
 * is_stack_empty - checks if the stack is empty
 *
 * @stack: the stack to check
 * Return: true if the stack is empty, false otherwise
 */
Bool is_stack_empty(Stack stack)
{
	return (stack == NULL);
}

/**
 * push_stack - push an element to the top of the stack
 *
 * @stack: the stack to push the element to
 * @data: the element to push
 * Return: the new stack
 */
Stack push_stack(Stack stack, int data)
{
	StackElement *new_element;

	new_element = (StackElement *)malloc(sizeof(StackElement));
	if (new_element == NULL)
	{
		fprintf(stderr, "Can't allocate stack element\n");
		exit(EXIT_FAILURE);
	}

	new_element->data = data;
	new_element->next = stack;

	return (new_element);
}

/**
 * free_stack - clear a stack element
 *
 * @stack: the stack element to free
 * Return: The empty stack
 */
Stack free_stack(Stack stack)
{
	StackElement *stack_element;

	if (is_stack_empty(stack))
		return (new_stack());

	stack_element = stack->next;
	free(stack);

	return (free_stack(stack_element));
}

/**
 * print_stack - print all element in a stack
 *
 * @stack: the stack element to print
 * Return: nothing
 */
void print_stack(Stack stack)
{
	if (is_stack_empty(stack))
	{
		printf("Stack is empty\n");
		return;
	}

	while (!is_stack_empty(stack))
	{
		printf("[%d] ", stack->data);
		stack = stack->next;
	}
}

/*
* Betty coding style: a file shouldn't contain more than 5 functions
* Find the other functions in stack_basic_op2.c ;)
*/
