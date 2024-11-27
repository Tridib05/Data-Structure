#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node 
{
  int value;
  struct node *next;
}*start,*one,*two,*three;

/*void printLinkedlist(struct node *p) 
{
  while (p != NULL) 
  {
    printf("%d ", p->value);
    p = p->next;
  }
/*/

int main() 
{
  
  //Allocate memory
  one = (struct node*) malloc(sizeof(struct node));
  two = (struct node*) malloc(sizeof(struct node));
  three = (struct node*) malloc(sizeof(struct node));
  
  //Assign values
  one->value = 77;
  two->value = 33;
  three->value = 55;
 
  //Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;
  
  // printing node-value
  start =one;
  //printf("%d->",start);
  printf(" %d->",one->value);
  //printf(" %d",one->next);
  printf(" %d->",two->value);
  //printf(" %d",two->next);
  printf(" %d",three->value);
  //printf(" %d",three->next);
}
