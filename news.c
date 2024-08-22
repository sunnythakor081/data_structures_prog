#include<stdio.h>
#include<stdlib.h>
#define max 5

int top=-1,ele[max];

void push();
void pop();
void display();
void peep();
void modify();
void main()
{
    int choice;
     printf("1.push\n2.pop\n3.dispaly\n4.Exit\n5.peep\n6.modify\n  ");
    while(choice!=4)
    {
       
        printf("Enter element");
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
           
           case 5:
           peep();
           break;
           
           case 6:
           modify();
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

void peep()
{
   int p;
   printf("\nEnter the position : ");
   scanf("%d",&p);
   if(top-p<=max)
   {
      printf("\nSTACK is overflow !!!");
   }
   else
   {
      printf("\nThe Elements is : %d",ele[top-p]);
   }
}
void modify()
{
  int v1,v2;
  printf("\nEnter Position for change : ");
  scanf("%d",&v1);
  printf("\nEneter the Number for change : ");
  scanf("%d",&v2);
  if(top-v1<=-1)
  {
     printf("\nSTACK is overflow !!!");
  }
  else
  {
    ele[top-v1]=v2;
    printf("\nCHANGE successfull !!!");
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