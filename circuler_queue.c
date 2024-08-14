// Online C compiler to run C program online
#include <stdio.h>
#define MAX 5


void push(int queue[],int *front,int *rear){
    int y;
    if(*front == *rear+1 || (*rear == MAX-1 && *front == 0)){
        printf("Queue is Full");
    }else{
        printf("Enter Element : ");
        scanf("%d",&y);
        if(*front > 0 && *rear == MAX-1){
            *rear = 0;
        }else{
            *rear += 1;
        
        queue[*rear] = y;
        if(*front == -1){
            *front = 0;
        }
    }
}
}

void pop(int queue[],int *front,int *rear){
    if(*front == -1){
        printf("Queue is Empty");
    }else{
        queue[*front] = 0;

        if(*rear == MAX-1 && *front >= 0){
            *rear = -1;
            *front += 1;
        }else if(*front == *rear){
            *front = *rear = -1;
        }else if(*front == MAX-1){
            *front = 0;
        }else{
            *front +=1;
        }
    }
}

void display(int queue[],int *front,int *rear){
    if(*front != -1){
        for(int i = 0;i<= 4;i++){
            printf("\n%d   ",queue[i]);
        }
    }
}

void Position(int *front,int *rear){
    printf("\n%d|------|%d\n\n",*front,*rear);
}

int main() {

    int queue[50],p = -1,q = -1,*front = &p,*rear = &q, choice;
    printf("\n1 for Push\n2 for pop\n3 for Display\n3 for exit\n");

    while(1){
        
        printf("Enter Your choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            push(queue,front,rear);
            break;

            case 2:
            pop(queue,front,rear);
            break;

            case 3:
            display(queue,front,rear);
            break;

        }
    }

return 0;
}