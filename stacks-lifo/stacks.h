#ifndef STACKS_H
#define STACKS_H

/*
 * File: list.h
 * Auth: Arsene Awounou
 */

#include <stdlib.h>

/**
 * enum Bool - to use false and true
 * @false: 0
 * @true: 1
 */
typedef enum Bool
{
    false,
    true
} Bool;

/**
 * struct Stack - Stack structure
 * @data: integer data elements
 * @next: pointer to the next Stack element
 */
typedef struct StackElement
{
    int data;
    struct StackElement *next;
} StackElement, *Stack;

Stack *new_stack(void);
Bool is_stack_empty(Stack);

#endif STACKS_H /* STACKS_H */
