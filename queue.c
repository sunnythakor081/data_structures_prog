#include<stdio.h>
#include<stdlib.h>
#define max 3



void insert();
void delet();
void display();
int ary[max];
int rear=-1;
int front=-1;


int main()
{
    int choice;
    printf("1.insert\n2.delet\n3.display\n\n");
    
    while(1)
    {
    
    printf("Enter choice  :");
    scanf("%d",&choice);
    
    switch(choice)
    
    {
        case 1:
        insert();
        break;
        
        case 2:
        delet();
        break;
        
        case 3:
        display();
        break;
        
        case 4:
        printf("Exit");
        
        default:
        printf("wrong item");
        
    }
    
}
}

void insert()
{
    int item;
    if(rear==max-1)
    {
        printf("queue is full\n");
        
    }
    else
    {
        printf("Enter item  :");
        scanf("%d",&item);
        if(front==-1){
        front=rear=0;
        }else{
        rear=rear+1;
            
        }
        ary[rear]=item;
        
    }
}

void delet()
{
    
    if(front==-1)
    {
        printf("queue is Empty\n");
        
    }
    else
    {
        
       printf("delet item %d\n",ary[front]);
       if(front==rear){
           front=rear=-1;
       }else{
       front=front+1;
       }
       
    }
}

void display()
{
    int i;
    
    if(front==-1)
    {
        printf("queue is Empty\n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d\n",ary[i]);
    }
}