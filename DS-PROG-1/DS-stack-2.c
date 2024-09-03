#include<stdio.h>
#include<stdlib.h>
#define max 5

void push(int stack[max], int *top)
{
    int element;
    if(*top==max-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
       
      printf("Enter push :");
      scanf("%d",&element);
      *top=*top+1;
      stack[*top]=element;
    }
}

 void pop(int stack[max], int *top)
 {
     
     if(*top==-1)
     {
         
         printf("Stack is Underflow\n");
     }
    else{
             
             printf("Deleted Element is %d\n",stack[*top]);
             *top=*top-1;
             
         }
     }

void peep(int stack[max],int *top)
{
    if(*top == -1){
      printf("\nStack is Underflow");
  }else{
      printf("Top element is %d \n",stack[*top]);
  }
}
void modify(int stack[max],int *top)
{
    int position,newElement;
  printf("\nEnter Position for change : ");
  scanf("%d",&position);
  printf("\nEneter the element for change : ");
  scanf("%d",&newElement);
  if(*top-position<=-1)
  {
     printf("Element is not present in stack\n");
  }
  else
  {
    stack[*top-position]=newElement;
    printf("\nCHANGE successfull !!!\n");
  }
}

void display(int stack[max], int *top)
{
     
     int i;
     if(*top==-1)
     {
         printf("Stack is Underflow\n");
         
     }
     else
     {
         
     for(i=0;i<=*top;i++)
     {
         printf("%d\n",stack[i]);
     }
      }
}
void main()
{
  int x = -1, *top = &x;
  int stack[max], choice, element, position,newElement;
     printf("1.push\n2.pop\n3.peep\n4.modify\n5.dispaly\n6.exit\n  ");
    while(1)
    {
       
        printf("Enter element :");
        scanf("%d",&choice);
    
    
    switch(choice)
    {  
        
         case 1:
         push(stack, top);
         break;
         
         case 2:
         pop(stack, top);
         break;
         
         case 3:
         peep(stack, top);
         break;
         
         case 4:
         modify(stack,top);
         break;
           
         case 5:
         display(stack, top);
         break;
           
         case 6:
         printf("Exit");
         break;
          
         default :
         printf("wrong number\n");
         
         
         
    }
    }
    
}