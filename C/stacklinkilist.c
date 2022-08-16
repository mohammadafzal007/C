#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack[n];
int top=-1;
void push(int x){
    if (top==n-1)
    {
        printf("overflow condition");

    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
    if (top==-1)
    {
        printf("underflow condition");
    }
    else{
        printf("deleted element is %d\n",stack[top]);
        top--;
    }
}
void peek(){
    if (top==-1)
    {
        printf("stack is empty");

    }
    else{
        printf("top most element is %d",stack[top]);
    }
}
void display(){
    if (top==-1)
    {
        printf("nothing is to printed\n");
    }
    else
    {
        for (int i = top; i>=0; i--)
        {
            printf("element is %d\n",stack[i]);
        }
        
    }
}
int main(){
    int ch;
    int data;
   do
   {
    printf("enter 1 for push,2 for pop,3 for peek and 4 for display and 0 for exit");
    scanf("%d",&ch);
    switch (ch)
    {
    case (1):
        printf("enter the data\n");
        scanf("%d",&data);
        push(data);
        break;
    
    case (2):
        pop();
        break;
    
    case(3):
        peek();
        break;
    
    case (4):
        display();
        break;

    case (0):
        exit(0);
        break;
    
    default:
        printf("invalid choice**\n");
        break;
    }
       
   } while (ch!=0);
   

}