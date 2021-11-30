#ifndef STACKS_H
#define STACKS_H

/*
 * File: list.h
 * Auth: Arsene Awounou
 */

#include <stdlib.h>

/**
 * struct Stack - Stack structure
 * @data: integer data elements
 * @next: pointer to the next Stack element
 */
typedef struct StackElement {
    int data;
    struct StackElement *next;
} StackElement, *Stack;

#endif STACKS_H /* STACKS_H */
