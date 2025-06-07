#include <stdio.h>
#include <stdlib.h>
#include "lib/linked_list.h"

struct Node *kth_to_last(LinkedList *list, int k);

int main()
{
  LinkedList list;
  init_list(&list);

  add_node_last(&list, 1);
  add_node_last(&list, 2);
  add_node_last(&list, 3);
  add_node_last(&list, 5);
  add_node_last(&list, 6);

  struct Node * kth = kth_to_last(&list, 3);

  printf("KTH: %d\n", kth->value);

}

struct Node *kth_to_last(LinkedList *list, int k)
{
  struct Node *head = list->head;
  struct Node *fast = head;

  if (head == NULL || k < 0)
  {
    return NULL;
  }

  // Move fast kth times ahead
  int counter = 0;
  while (counter < k)
  {
    if (fast == NULL)
    {
      printf("NOT A K-LAST");
      return NULL;
    }
    fast = fast->next;
    counter++;
  }

  while (fast != NULL)
  {
    head = head->next;
    fast = fast->next;
  }

  return head;
}
