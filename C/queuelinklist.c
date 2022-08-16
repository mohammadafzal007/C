#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
void enqueue(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if (front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }

}
void peek()
{
    if (front==0 &&rear==0)
    {
        printf("empty\n");
    }
    else{
        printf("the peek element is %d\n",front->data);
    }

}
void dequeue()
{
    struct node*temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("underflow  condtion\n");

    }
    else if (front==rear)
    {   
        printf("the deleted element is %d\n",front->data);
        front=rear=0;
    }
    
    else 
    {
        printf("the deleted element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void display()
{
    struct node*temp;
    temp=front;
    if (front==0 && rear==0)
    {
        printf("nothing to print\n");
    }
    else
    {
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    }
}
void main()
{
int a;
int ch;
do
{
    printf("1 for enqueue,2 for peek,3 for dequeue,4 for display and 0 for exit");
    scanf("%d",&ch);
    switch (ch)
    {
    case (1):
    printf("enter the data\n");
    scanf("%d",&a);
    enqueue(a);
        break;
    case (2):
    peek();
    break;

    case (3):
    dequeue();
    break;

    case (4):
    display();
    break;

    case (0):
    exit;
    break;
    
    default:
    printf("invalid\n");
        break;
    }
} while (ch!=0);

}