#include "stacks.h"

/**
 * new_stack - returns an empty stack
 *
 * Return: NULL
 *
 */
Stack new_stack(void)
{
    return (NULL);
}

/**
 * is_stack_empty - checks if the stack is empty
 *
 * @stack: the stack to check
 *
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
 *
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

Stack free_stack(Stack stack)
{
    StackElement *stack_element;

    if (is_stack_empty(stack))
        return new_stack();

    stack_element = stack->next;
    free(stack);

    return (free_stack(stack_element));
}