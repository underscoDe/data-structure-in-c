#include "stacks.h"

/**
 * pop_stack - remove the top element from the stack
 *
 * @stack: the stack to pop
 * Return: the stack without the popped element or a new empty stack
 */
Stack pop_stack(Stack stack)
{
    StackElement *element;

    if (is_stack_empty(stack))
        return new_stack();

    element = stack->next;
    free(stack);

    return (element);
}
