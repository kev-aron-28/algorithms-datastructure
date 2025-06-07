#include <stdio.h>
#include <stdlib.h>
#include "lib/linked_list.h"

void partition(LinkedList *list, int x);

int main(int argc, char const *argv[])
{
  LinkedList list;
  init_list(&list);

  add_node_last(&list, 3);
  add_node_last(&list, 5);
  add_node_last(&list, 8);
  add_node_last(&list, 5);
  add_node_last(&list, 10);
  add_node_last(&list, 2);
  add_node_last(&list, 1);

  print_list(&list);

  partition(&list, 5);

  print_list(&list);

  return 0;
}

void partition(LinkedList *list, int x) {
  LinkedList partition;

  init_list(&partition);

  struct Node * current = list->head;

  while(current != NULL) {

    if(current->value < x) {
      add_nost_first(&partition, current->value);
    } else {
      add_node_last(&partition, current->value);
    }

    current = current->next;
  }

  *list = partition;
}
