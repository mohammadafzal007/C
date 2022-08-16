#include<stdlib.h>
#include<stdio.h>

struct node{
    int data;
    struct node*next;
};
struct node*top=0;
void push(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void pop(){
  
    if (top==0)
    {
        printf("underflow condition");
    }
    else
    {
        printf("deleted element %d\n",top->data);
        top=top->next;
        
    }
}
void peek(){
    if (top==0)
    {
        printf("empty");
    }
    else{
        printf("%d is top most\n",top->data);
    }

}
void display(){
    struct node*temp;
    temp=top;
    if (top==0)
    {
        printf("nothing to print");
    }
    else
    {printf("Stack is :\n");
        while (temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        
    }
}
int main(){
    int choice;
    int data;
    do
    {
         printf("Enter choice : 1- push  2- pop  3- top   4- display 0- exit\n");
         scanf("%d",&choice);
        switch (choice)
        {
        case (1):
        printf("enter the data\n");
        scanf("%d",&data);
        push(data);
        break;

        case (2):
        pop();
        break;

        case (3):
        peek();
        break;

        case (4):
        display();
        break;

        case (0):
        exit(0);
        break;

        default:
        printf("invalid choice");
        break;
        }
    } while (choice!=0);
 return 0;   
}