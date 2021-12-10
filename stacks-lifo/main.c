#include "stacks.h"

/**
 * main - to test our stack functions
 *
 * Return: always 0
 */
int main()
{
    Stack stack = new_stack();

    print_stack(stack);

    stack = push_stack(stack, 15);
    stack = push_stack(stack, 17);
    stack = push_stack(stack, 98);
    stack = push_stack(stack, 101);

    print_stack(stack);

    stack = pop_stack(stack);

    print_stack(stack);

    printf("Length: %d\n", stack_length(stack));
    stack = free_stack(stack);
    printf("Length: %d\n", stack_length(stack));

    return (0);
}