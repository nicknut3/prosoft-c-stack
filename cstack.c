#include <stdio.h>
#include <stddef.h>
#include "cstack.h"


#define UNUSED(VAR) (void)(VAR)
#define SIZE 10

int top = -1, inp_array[SIZE];

hstack_t stack_new(void)
{
    return -1;
}

void stack_free(const hstack_t hstack)
{
    UNUSED(hstack);
}

int stack_valid_handler(const hstack_t hstack)
{
    UNUSED(hstack);
    return 1;
}

unsigned int stack_size(const hstack_t hstack)
{
    UNUSED(hstack);
    return 0;
}

void stack_push(const hstack_t hstack, const void* data_in, const unsigned int size)
{
    UNUSED(hstack);
    UNUSED(data_in);
    UNUSED(size);
}

void stack_push_int(const hstack_t hstack, int data_in, const unsigned int size)
{
    UNUSED(size);
    UNUSED(hstack);
    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        top = top + 1;
        inp_array[top] = data_in;
        printf("Top element of the stack is %d", inp_array[top]);
    }
}

unsigned int stack_pop_int(const hstack_t hstack, int* data_out, const unsigned int size)
{
    UNUSED(size);
    UNUSED(hstack);
        if (top == -1)
        {
            printf("\nUnderflow!!");
        }
        else
        {
            printf("\nPopped element: %d", inp_array[top]);
            *data_out = inp_array[top];
            inp_array[top] = 0;
            top = top - 1;
        }
    return 0;
}

unsigned int stack_pop(const hstack_t hstack, void* data_out, const unsigned int size)
{
    UNUSED(hstack);
    UNUSED(data_out);
    UNUSED(size);
    return 0;
}

