#include <bits/stdc++.h>
#include <string.h>

typedef struct Customer
{
    long Account_No;
    char Name[100];
    double Balance;
} c;
void get_data(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Customer Account Number\n", i + 1);
        scanf("%lf", &c[i].Account_No);
        printf("Enter Customer Name\n");
        scanf("%s", &c[i].Name);
        printf("Enter Customer Balance\n");
        scanf("%d", &c[i].Balance);
    }
    printf("\n");
}
void show_data(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c[i].Balance < 100)
        {
            printf("Customer Name is: %c\n", c[i].Name);
            printf("Customer Account Number is: %lf\n", c[i].Account_No);
        }
    }
}

int main()
{
    Customer c[200];
    int n;
    // printf("Enter Number of Customers\n");
    // scanf("%d",&n);
    printf("Enter Number of Customers\n");
    scanf("%d", &n);
    get_data(n);
    show_data(n);
}
