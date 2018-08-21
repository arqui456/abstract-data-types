#include <stdio.h>
#include <stdlib.h>
typedef struct{
  int item;
  struct Bt *left;
  struct Bt *right;
}Bt;
Bt *createBt(int item, Bt *left, Bt* right){
  Bt *newBt = malloc(sizeof(Bt));
  newBt->item = item;
  newBt->left = left;
  newBt->right = right;
  return newBt;
}
void add(Bt **bt, int item){
  if(!(*bt)) *bt = createBt(item, NULL, NULL);
  else if((*bt)->item > item) add(&(*bt)->left, item);
  else add(&(*bt)->right, item);
}
