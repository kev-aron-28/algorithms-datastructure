#include <stdlib.h>
#include <stdio.h>
#include "lib/linked_list.h"

void remove_dups(LinkedList * list);
struct Node * get_node_at(LinkedList * list, int index);

int main(void) {
  LinkedList test;
  init_list(&test);

  add_node_last(&test, 1);
  add_node_last(&test, 2);
  add_node_last(&test, 2);
  add_node_last(&test, 2);
  add_node_last(&test, 2);
  add_node_last(&test, 1);
  add_node_last(&test, 3);

  print_list(&test);

  remove_dups(&test);

  print_list(&test);

  free_list(&test);
}

void remove_dups(LinkedList *list) {
  struct Node * temp = list->head;

  if(temp == NULL) {
    return;
  }

  LinkedList set;
  init_list(&set);
  int currentIndex = 0;

  while(temp != NULL) {
    if(search_value(&set, temp->value) == 1) {
      delete_node_at(list, currentIndex);
      temp = get_node_at(list, currentIndex);
    } else {
      add_node_last(&set, temp->value);
      temp = temp->next;
      currentIndex++;
    }
  }

  free_list(&set);  
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
