#include <stdio.h>
#define max 5


void push(int stack[max],int *top)
{
    int element;
    if(*top == max)
    {
        printf("Stack is OverFlow");
    }
    else
    {
        printf("Enter the Element : ");
        scanf("%d",&element);
        *top+=1;
        stack[*top] = element;
    }
}

void pop(int stack[max],int *top)
{
    if(*top == -1)
    {
        printf("Stack is UnderFlow");
    }
    else
    {
        printf("poped element :%d\n",stack[*top]);
        *top-=1;
    }
}

void display(int stack[max],int *top)
{
    if(*top == -1)
    {
        printf("Stack is UnderFlow");
    }
    else
    {
    for(int i =0;i<=*top;i++)
    {
        printf("%d  ",stack[i]);
    }
    printf("\n");
}
}



void main() 
{
    // Write C code here



    int x=-1;
    int stack[5],*top = &x;
        printf("\n1 for the Push : \n");
        printf("2 for the POP : \n");
        printf("3 for the display : \n");
    int choice;
    while(1)
    {
        
        printf("Enter Your Choice :");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            push(stack,top);
            break;
            
            case 2:
            pop(stack,top);
            break;
            
            case 3:
            display(stack,top);
            break;
        }
        
    }
}
    
    
