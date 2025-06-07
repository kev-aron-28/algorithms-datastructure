#include <stdio.h>
#include <stdlib.h>
#include "lib/linked_list.h"

struct Node * loop_detection(LinkedList *list);

int main(int argc, char const *argv[])
{
  LinkedList list;
  init_list(&list);

  struct Node second = { .value = 2 };
  struct Node first = { .value = 1, .next = &second };
  struct Node thirt = { .value = 3, .next = NULL };
  second.next = &thirt;

  list.head = &first;

  struct Node * node = loop_detection(&list);

  if(node == NULL) {
    printf("No loop \n");
  } else {
    printf("The loop is in the value %d \n", node->value);
  }

  return 0;
}

struct Node * loop_detection(LinkedList *list) {
  if(list->head == NULL || list->head->next == NULL) {
    return NULL;
  }

  struct Node * tortoise = list->head;
  struct Node * hare = list->head;

  while(hare != NULL && hare->next != NULL) {
    tortoise = tortoise->next;
    hare = hare->next->next;

    if(hare == tortoise) {;
      return tortoise;
    }
  }

  return NULL;
  
}
