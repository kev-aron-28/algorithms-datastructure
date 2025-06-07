#include <stdio.h>
#include <stdlib.h>
#include "lib/linked_list.h"

void remove_middle(struct Node * node);
struct Node * get_node_at(LinkedList * list, int index);

int main() {
  LinkedList list;
  init_list(&list);

  add_node_last(&list, 1);
  add_node_last(&list, 2);

  add_node_last(&list, 2);
  
  add_node_last(&list, 3);
  add_node_last(&list, 3);

  print_list(&list);
  
  struct Node * to_remove = get_node_at(&list, 2);

  remove_middle(to_remove);

  print_list(&list);

  free_list(&list);
}

void remove_middle(struct Node * node) {
  if(node == NULL) {
    return;
  }

  struct Node * next = node->next;

  node->value = next->value;

  node->next = next->next;

  free(next);
}

struct Node * get_node_at(LinkedList * list, int index) {
  struct Node * temp = list->head;

  int currentIndex = 0;

  if(index == 0 && temp != NULL) {
    return temp;
  }

  while(temp != NULL && currentIndex != index) {
    temp = temp->next;

    currentIndex++;
  }

  if(temp == NULL) {
    return NULL;
  }

  return temp;
}
