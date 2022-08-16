#include<stdio.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x){
    if (rear==n-1)
    {
        printf("overflow\n");

    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
    
}
void dequeue(){
    if (front==-1&&rear==-1)
    {
        printf("underflow");
    }
    else if (front==rear)
    {   printf("the delete element is %d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("deleted element is %d\n",queue[front]);
        front++;
    }
}
void peek(){
    if (front==-1 && rear==-1)
    {
        printf("*empty*");
    }
  else
  {
      printf("peek element is %d\n",queue[front]);
  }  
} 
void display()
{
if (front==-1 && rear==-1)
{
    printf("queue is empty");
}

else
{
    for (int i = front; i<rear+1; i++)
    {
        printf("element: %d\n",queue[i]);
    }
    
}

}
void main(){
    enqueue(45);
    enqueue(4);
    enqueue(44);
    enqueue(66);
    enqueue(69);
    enqueue(65);
    display();
    peek();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    peek();
    display();
}