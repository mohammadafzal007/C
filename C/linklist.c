#include <stdio.h>

void main()
{
    struct node
    {
        int x;
        struct node *next;
    };

    struct node *newnode, *head, *temp;
    head = 0;
    int ch;

    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element");
        scanf("%d", newnode->x);
        newnode->next = head;
        head=newnode;
        {
            if (head == 0)
            {
                head = temp = newnode->next;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }

            printf("Do you want to continue 0 and 1");
            scanf("%d", &ch);
        }
    }

    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->x);
        temp = temp->next;
    }
    getchar();
}