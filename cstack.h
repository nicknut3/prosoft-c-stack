#ifndef CSTACK_H
#define CSTACK_H

typedef int hstack_t;

hstack_t stack_new(void);
void stack_free(const hstack_t stack);
int stack_valid_handler(const hstack_t stack);
unsigned int stack_size(const hstack_t stack);
void stack_push(const hstack_t stack, const void* data_in, const unsigned int size);
unsigned int stack_pop(const hstack_t stack, void* data_out, const unsigned int size);

void stack_push_int(const hstack_t stack, const int data_in, const unsigned int size);
unsigned int stack_pop_int(const hstack_t stack, int* data_out, const unsigned int size);

/*int x = 127;
hstack_t my_wonderful_stack = stack_new();
stack_push(my_wonderful_stack, &x, sizeof(x));*/

#endif /* CSTACK_H */

