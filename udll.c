// Deven Bernard     - 10099810
// Marissa Huang     - 10179169
// Kevin Zuern       - 10134425
// Quentin Petraroia - 10145835

#include "udll.h"
#include <stdlib.h>

// Stores the start of the list. Data in head is the length of the list
static Node head = { 0, NULL, NULL };
// Points to the end of the list
static Node* tail = &head;

static void insert(int index, union Data data) {
  Node* new = malloc(sizeof(Node));
  new->data = data;

  char startFromHead = (index <= length() / 2);

  int currentIndex;
  Node* insertionPoint = NULL;

  if (startFromHead)
    insertionPoint = tail;
  else
    insertionPoint = &head;

  // Find the point to insert
  while (currentIndex != index) {
    if (startFromHead) {
      insertionPoint = insertionPoint->next;
      currentIndex++;
    }
    else {
      insertionPoint = insertionPoint->prev;
      currentIndex--;
    }
  } // end while

  // Insert the node
  Node tmp = *insertionPoint;
  insertionPoint->prev = new;
  new->next = insertionPoint;

  if (index > 0)
  {
    new->prev = tmp.prev;
    tmp.next = new;
  }
}

static union Data get(int index) {
  // Quentin

  // Traverse list from shortest end (head or tail). use length() to figure that out
  printf("get() not implemented.\n");
  printf("Exiting now...\n");
  exit(1);
}

// temporarily renamed to n_remove b/c "remove" conflicts with a function in stdio.h
static void n_remove(int index) {
  // Marissa

  // Traverse list from shortest end (head or tail). use list length to figure that out
  // Don't forget to decrement list length when removing a node (length stored in head.data.intData)
  printf("remove() not implemented.\n");
  printf("Exiting now...\n");
  exit(1);
}

static int length() {
  // The length of the list is always stored in the data of the head of the list
  return head.data.intData;
}