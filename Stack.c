#include <stdio.h>
#include <stdlib.h>
typedef struct{
  int item;
  struct Stack *next;
}Stack;
void push(Stack **topRef, int item){
  Stack *newNode = malloc(sizeof(Stack));
  newNode->item = item;
  newNode->next = *topRef;
  *topRef = newNode;
}
void pop(Stack **topRef){
  Stack *top = NULL;
  if(!(*topRef)) return;
  top = *topRef;
  *topRef = top->next;
  free(top);
}
void peek(Stack **topRef){
  printf("%d\n",(*topRef)->item);
}
void newStack(Stack **topRef){
  *topRef = malloc(sizeof(Stack));
}

