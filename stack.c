#include<stdio.h>
#include<stdlib.h>
#define max 5

int top=-1,ele[max];

void push();
void pop();
void display();

void main()
{
    int choice;
     printf("1.push\n2.pop\n3.dispaly\n4.Exit\n   ");
    while(choice!=4)
    {
       
        printf("Enter element\n");
        scanf("%d",&choice);
    
    
    switch(choice)
    {  
        
        case 1:
         push();
         break;
         
         case 2:
         pop();
         break;
         
         case 3:
        display();
         break;
         
         case 4:
           break;
          
          default :
          printf("wrong number\n");
         
         
         
    }
    }
    
}


void push()
{
    int x;
    
    if(top==max-1)
    {
        printf("stack is full\n");
    }
    else
    {
       
      printf("enter push\n");
      scanf("%d",&x);
      top=top+1;
      ele[top]=x;
    }
}

 void pop()
 {
     
     if(top==-1)
     {
         
         printf("stack is Empty\n");
     }
    else{
             
             printf("%d is poped\n",ele[top]);
             top=top-1;
             
         }
     }


void display()
{
     
     int i;
     if(top==-1)
     {
         printf("stack is Empty\n");
         
     }
     else
     {
         
     for(i=0;i<=top;i++)
     {
         printf("%d\n",ele[i]);
     }
     
     
     
     
   }
}




