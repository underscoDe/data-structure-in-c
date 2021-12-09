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

/**
 * top_stack - returns the value of the top element of the stack
 *
 * @stack: the stack to get the top element from
 * Return: the top element's value if the stack isn't empty
 */
int top_stack(Stack stack)
{
    if (is_stack_empty(stack))
    {
        printf("The stack is empty!\n");
        return (-1);
    }

    return stack->data;
}

/**
 * stack_length - returns the length of the stack
 *
 * @stack: the stack to get the length of
 * @Return: the length of the stack
 */
int stack_length(Stack stack)
{
    int len = 0;

    while (!is_stack_empty(stack))
    {
        len++;
        stack = stack->next;
    }

    return (len);
}
