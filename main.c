#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "expr.h"


instr plusOp;
instr printOp;
instr twoVal;

stack *runInstr(instr i, stack *s) {
  switch (i.type) {
    case operation:
      break;
    case value:
      break;
  }
  return s; 
}

int main(void) {
  
  plusOp.type = operation;
  plusOp.expr.oper = plus; 
  twoVal.type = value;
  twoVal.expr.value = 2; 
  printOp.type = operation;
  printOp.expr.oper = print;

  instr instructions[4];
  instructions[0] = twoVal;
  instructions[1] = twoVal;
  instructions[2] = plusOp;
  instructions[3] = printOp;

  stack *s = newStack();

  int pc;

  for (pc = 0; pc < 4; pc++) {
    s = runInstr(instructions[pc], s); 
  }

  int* i = malloc(sizeof(int));
  *i = 5;
  s = push(s,(void*)i);
  node *j = pop(s);

  printf("%d\n",*i);
  printf("%d\n",(*(int*)(j->value)));

  return 0;  
}
