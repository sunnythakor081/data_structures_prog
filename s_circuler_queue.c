#include<stdio.h>
#include<stdlib.h>

#define max 5

int cque[max];

void insert(int *r,int *f)
{
	int val;
	if(*r==max-1 &&*f==0 || *r==*f-1)
	{
		printf("Circular Queue is full\n");
	}
	else
	{
		printf("Enter Element:");
		scanf("\n%d",&val);

		if(*r==max-1&&*f>0)
		{
			 *r=0;
		}
		else
		{
			*r=*r+1;
			cque[*r]=val;
		}if(*f==-1){
		    *f=0;
		}
		}
	}
	



void removesq(int *r,int *f)
{
	 if(*f==-1)
	 {
		 printf("\nCircular Queue is empty:\n");
	 }
	  else 
  {
      printf("\ndeleted element %d",cque[*f]);
    cque[*f] = 0;
     if(*r == max-1 && *f >= 0){
            *r = -1;
            *f += 1;
        }
    else if(*f == *r) 
    {
      *f = *r = -1;
    } 
    else if(*f == max-1) {
      *f = 0;
    }else{ 
      *f += 1;
    }
  }
}
void display(int *r, int*f) {
  int i;
  if(*f==-1) 
  {
    printf("Circular Queue is Empty");
  } else {
    for (i = 0; i <= 4; i++) {
      printf("%d   ", cque[i]);
    }
  }
}
void main()

{
	int r1=-1,f1=-1,c;
	int *r=&r1;
	int *f=&f1;
	
     	printf("\n1:insert:");
		printf("\n2:remove:");
		printf("\n3:exit:");
  
	while(1)
	{
		
		printf("\nEnter your choice:");
		scanf("%d",&c);

		switch(c)
		{
		case 1:
		       insert(r,f);
			   display(r,f);
			   break;
		case 2:removesq(r,f);
			   display(r,f);
			   break;
		case 3:
		exit(0);

		}
	}
}
