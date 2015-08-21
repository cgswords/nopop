#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stack* newStack(void) {
  stack* s = malloc(sizeof(stack));
  s->head = NULL;
  return s;
}

node* peek(stack* s) {
  return s->head;
}

node* pop(stack *s) {
    if (s->head == NULL) {
      return NULL;  
    } 
    node* tmp = s->head;
    s->head = s->head->next;
    return tmp;
}

stack* push(stack* s, void* v) {
  node* newNode = malloc(sizeof(node));
  newNode->value = v;
  newNode->next = s->head;
  s->head = newNode;
  return s;
}
