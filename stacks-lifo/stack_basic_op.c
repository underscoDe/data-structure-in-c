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
