#include<stdio.h>
#include<stdlib.h>
#define max 5
int pre(char ch)
{
 if(ch=='*' || ch=='/')
    return 1;
 else
    return 0;
}
int push(char stack[],int top,char ch)
{
  if(top==max-1)
    printf("\nOverflow");
  else                              
  {
   top++;
   stack[top]=ch;
  }
  return top;
}
int pop(char stack[],int top)
{
  if(top==-1)
   printf("\nUnderflow");
  else
  {
    printf(" %c ",stack[top]);
    top--;
  }
  return top;
}
void converter(char index[],char stack[],int top)
{
  int i=0;
  while(index[i]!='\0')
  {
    if(index[i]=='+' || index[i]=='-' || index[i]=='*' || index[i]=='/')
    {
      if(top==-1)
	top=push(stack,top,index[i]);
      else
      {

	 while(pre(stack[top])>=pre(index[i]) && top!=-1)
	   top=pop(stack,top);

	top=push(stack,top,index[i]);

      }
    }
    else
    {
      printf(" %c ",index[i]);
    }
    i++;
  }
  while(top!=-1)
  {
   top=pop(stack,top);
  }
}
void main()
{
 char stack[10],index[50];
 int top=-1;

 printf("\nEnter Your Infix :");
 scanf("%s",index);
 converter(index,stack,top);

}
