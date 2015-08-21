#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  void* value;
  struct node* next;
} node;

typedef struct stack {
  node* head;
} stack;

stack* newStack(void); 

node* peek(stack* s);

node* pop(stack *s);

stack* push(stack* s, void* v);

#endif
