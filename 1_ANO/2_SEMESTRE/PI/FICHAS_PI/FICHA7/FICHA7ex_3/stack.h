#include "listas.h"

typedef LInt Stack;

void initStack (Stack *s);
int isEmptyS (Stack *s);
int push (Stack *s, int x);
int pop (Stack *s, int *x);
int top (Stack *s, int *x);