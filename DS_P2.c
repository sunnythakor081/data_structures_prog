#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int top = -1, ele[MAX];

void push();
void pop();
void display();
void peep();
void modify();

int main()
{
    int choice;
     printf("1. push\n2. pop\n3. peep\n4. modify\n5. display\n6. Exit\n");
    while (1)
    {
       
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                peep();
                break;  
            
            case 4:
                modify();
                break;  
            
            case 5:
                display();
                break;
            
            case 6:
                printf("Exiting...\n");
                exit(0);  
            
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0; 
}

void push()
{
    int x;
    if (top == MAX - 1)
    {
        printf("Stack is Overflow!!\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &x);
        top++;
        ele[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is popped\n", ele[top]);
        top--;
    }
}

void peep()
{
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Element at position %d is %d\n", pos, ele[top - pos + 1]);
    }
}

void modify()
{
    int pos, newVal;
    printf("Enter position to modify: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Enter new element: ");
        scanf("%d", &newVal);
        ele[top - pos + 1] = newVal;
        printf("element at position %d modified successfully!!\n", pos);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", ele[i]);
        }
    }
}
