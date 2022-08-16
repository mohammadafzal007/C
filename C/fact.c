#include<stdio.h>
int main() 
    {
int n,i,fact=1;
printf("enter no.");
scanf("%d",&n);


for(i=1;i<=n;i++)
{
     fact=i*fact;
}
    printf("factorial is %d",fact);
    
return 0;

    }

    