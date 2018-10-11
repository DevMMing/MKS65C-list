#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
struct node *head=NULL;
void print_list(struct node * foo){
  while(foo){
    printf("%d\n",foo->i);
    foo=foo->next;
  }
}
struct node * insert_front(struct node *foo, int x){
  struct node *newNode=malloc(sizeof(struct node)); 
  newNode->next=foo;
  newNode->i=x;
  return newNode;
}
struct node * free_list(struct node *foo){
	struct node* cur;
    while(foo!=NULL){
      cur=foo;
	  foo=foo->next;
	  free(foo);
  }
  return foo;
}

int main(void) {
  int point=sizeof(struct node);
  head=insert_front(head,9);
  head=insert_front(head,5);
  head=insert_front(head,1);
  head=insert_front(head,4);
  head=insert_front(head,1);
  head=insert_front(head,3);
  print_list(head);
  head=free_list(head);
  if (head==NULL){
    printf("YES, the list is empty :)!\n");
  }
  return 0;
}