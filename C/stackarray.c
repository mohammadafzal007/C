#include<stdio.h>
//#define N 5



void main()
{
int choice;
int top=-1;
int stack[5];
do
{
    printf("Enter choice : 1- push  2- pop  3- top   4- display\n");
scanf("%d",&choice);

switch(choice)

{
    case 1:push();
          break;
    case 2:pop();
          break;
    case 3:peek();
          break;
    case 4:display();
          break;
    default:printf("invalid choice\n");
}
}while(choice!=0);

}
void push()
{
    int x;
    printf("enter the element\n");
    scanf("%d",&x);

    if(top==N-1)
    printf("Stack is Overflow\n");
    else
    {
         top++;
        stack[top]=x;
       
    }
}
void pop()
{
int item;
if(top==-1)
printf("Stack is Underflow\n");
else
item=stack[top];
top--;
printf(" pop elements is %d\n" ,item);
}

void peek()
{
if(top==-1)
printf("Stack is Empty\n");
else
printf("Top element is %d \n",stack[top]);
}

void display()
{
int i;
printf("Stack is :\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}

}
