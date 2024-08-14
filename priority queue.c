#include <stdio.h>
#define MAX 5


void push();
void pop();
void display();

int queue1[5],queue2[5],w =-1,x=-1,y=-1,z=-1;
int *f1= &w,*f2 = &x,*r1 =&y,*r2 = &z;


int main() 
{
    printf("1.push\n2.pop\n3.display\n\n");
    
    int choice;

    while(1)
    {
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            push();
            display();
            break;

            case 2:
            pop();
            display();
            break;

            case 3:
            display();
            break;
        }
    }

}
  


void push()
{
    int age;
    if(*r1 == MAX-1 && *r2 == MAX-1)
    {
        printf("Sorry , Both the Queue are Full");
    }
    else
    {
        printf("Enter Your Age : ");
        scanf("%d",&age);

        if(age >= 60)
        {
            if(*r1 == MAX-1)
            {
                printf("Queue of Sinior citizen is full ");
            }
            else
            {
                *r1+=1;
                queue1[*r1] = age;
                if(*f1 == -1)
                {
                    *f1 = 0;
                }
            }
        }
        else if(age < 60)
        {
            if(*r2 == MAX-1)
            {
                printf("Queue is Full ");
            }else{
                *r2+=1;
                queue2[*r2] = age;
                if(*f2 == -1){
                    *f2 = 0;
                }
            }
        }
    }
}

void pop()
{

    if(*f1 == -1 && *f2 == -1){
        printf("Both Queue Are Empty ");
    }
    else
    {
        if(*f1 != -1)
        {
            queue1[*f1] = 0;
            if(*f1 == *r1)
            {
                *f1 = *r1 = -1;
            }
            else
            {
                *f1+=1;
            }
        }
        else if(*f2 != -1)
        {
            queue2[*f2] = 0;
            if(*f2 == *r2){
                *f2 = *r2 = -1;
            }else{
                *f2+=1;
            }
        }
    }
}

void display(){
    int i;
    printf("\n");
    printf("SC - ");
    if(*f1 != -1){
        for(i =*f1;i<=*r1;i++){
            printf("%d  ",queue1[i]);
        }
    }
       printf("\n");
       printf("NSC - ");
    if(*f2 != -1){
        for(i =*f2;i<=*r2;i++){
            printf("%d  ",queue2[i]);
        }
    }
       printf("\n");
}