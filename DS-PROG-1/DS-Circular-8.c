#include <stdio.h>
#define MAX 5

void insert(int queue[], int *front, int *rear, int element) {
  if ((*rear == MAX - 1 && *front == 0) || *rear == *front - 1) {
    printf("Queue is Full");
  } else {
    if (*front > 0 && *rear == MAX - 1) {
      *rear = 0;
    } else {
      *rear += 1;
    }
    queue[*rear] = element;

    if (*front == -1) {
      *front = 0;
    }
  }
}

void delete (int queue[], int *front, int *rear) {
  if (*front == -1) {
    printf("Queue is Empty");
  } else {
    queue[*front] = 0;
    if (*front == *rear) {
      *front = *rear = -1;
    } else if(*front == MAX-1) {
      *front = 0;
    }else{ 
      *front += 1;
    }
  }
}

void modify(int queue[], int *front, int *rear, int index, int element) {
  if (index <= 4 && index >= 0){
    if(*rear >= *front){
      if(index <= *rear && index >= *front){
          queue[index] = element;
      }else{
        printf("Enter Valid Index");
      }
    }else if(*rear < *front){
      if(index <= *rear || index >= *front){
        queue[index] = element;
      }else{
        printf("Enter Valid Index");
      }
    }
  }else{
    printf("Enter Valid Index");
  }
}
  
//   if ((index < 5 && index >= 0) && (
//     (*rear >= *front && index <= *rear && index >= *front) || 
//     (*rear < *front && (index <= *rear || index >= *front))
//     )
//     ) {
//     queue[index] = element;
//   } else {
//     printf("Enter Valid Index");
//   }
// }

void display(int queue[], int *front, int *rear) {
  int i;
  if (*front == -1) {
    printf("Queue is Empty");
  } else {
    for (i = 0; i <= 4; i++) {
      printf("%d   ", queue[i]);
    }
  }
}

void main() {
  int queue[MAX], fr = -1, re = -1, *front = &fr, *rear = &re, element, index,
                  newElement;
  int choice;

  while (1) {
    printf("\nEnter 1 for Insert\nEnter 2 for Delete\nEnter 3 for "
           "Modify\nEnter 4 for Display\nEnter 5 for Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the Element : ");
      scanf("%d", &element);
      insert(queue, front, rear, element);
      break;

    case 2:
      delete (queue, front, rear);
      break;

    case 3:
      printf("Enter the index : ");
      scanf("%d", &index);
      printf("Enter the New Element : ");
      scanf("%d", &newElement);
      modify(queue, front, rear, index, newElement);
      break;

    case 4:
      display(queue, front, rear);
      break;

    default:
      printf("Enter Valid Number");
      break;
    }
  }
}