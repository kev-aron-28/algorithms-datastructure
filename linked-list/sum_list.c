#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib/linked_list.h"

LinkedList sum_list(LinkedList *list1, LinkedList *list2);

int main(int argc, char const *argv[])
{
  LinkedList list1;
  init_list(&list1);

  add_node_last(&list1, 1);
  add_node_last(&list1, 2);

  print_list(&list1);

  LinkedList list2;
  init_list(&list2);

  add_node_last(&list2, 1);

  print_list(&list2);

  LinkedList result = sum_list(&list1, &list2);

  print_list(&result);

  free_list(&list1);
  free_list(&list2);
  return 0;
}

LinkedList sum_list(LinkedList *list1, LinkedList *list2) {

  LinkedList result;
  init_list(&result);

  int carry = 0;

  while(list1->head != NULL || list2->head != NULL || carry != 0) {

    int val1 = 0;
    int val2 = 0;

    if(list1->head != NULL) val1 = list1->head->value;
    if(list2->head != NULL) val2 = list2->head->value;

    int total = val1 + val2 + carry;

    carry = (int)floor(total / 10);

    add_node_last(&result, total % 10);
    
    if(list1->head != NULL) {
      list1->head = list1->head->next;
    }

    if(list2->head != NULL) {
      list2->head = list2->head->next;
    }
  }

  return result;
}

