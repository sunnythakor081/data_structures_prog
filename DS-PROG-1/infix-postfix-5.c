#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    void push(int [],int *,char );
    char pop(int [],int *);
    int priority(char);
    int i = 0,d = -1;
    int stack[100],*top = &d;
    char infix[100],x;

    printf("Enter the Infix expression  : ");
    scanf("%s",infix);

    while(infix[i] != '\0'){
         if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' ){
            if(*top == -1){
                push(stack,top,infix[i]);
            }else{
                if(priority(stack[*top]) >= priority(infix[i])){
                    x = pop(stack,top);
                    printf("%c",x);
                    push(stack,top,infix[i]);
                }else{
                     push(stack,top,infix[i]);
                }
            }
        }else if(infix[i] == '('){
             push(stack,top,infix[i]);
        }else if(infix[i] == ')'){
            while(stack[*top] != '('){
                x = pop(stack,top);
                printf("%c",x);
            }
            x = pop(stack,top);
        }else if(infix[i] >= 'a' && infix[i] <= 'z'){
            printf("%c",infix[i]);
        }




        i++;
    }


     while(*top != -1){
                x = pop(stack,top);
                printf("%c",x);
            }
    return 0;
}

void push(int stack[],int *top,char ch){
    *top+=1;
    stack[*top] = ch;
}

char pop(int stack[],int *top){
    char y;
    y = stack[*top];
    *top-=1;
    return y;
}

int priority(char c){
    int p;
    if(c == '*' || c == '/'){
        p = 2;   
    }else if(c == '+' || c == '-'){
        p = 1;
    }else if(c == '(' || c == ')'){
        p = 0;
    }
return p;
}
