#ifndef EXPR_H
#define EXPR_H

typedef enum {plus, minus, times, print, force} op;
typedef enum {value, operation} expr_type;

union expr
{
  int value;
  op  oper;
} expr;  

typedef struct instr {
  expr_type type;
  expr      expr;
} instr;

#endif
