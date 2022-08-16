#include<stdio.h>
int main() 
{
int sum=0,rem,n,rev=0;
printf("enter number ");
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
sum=sum+rem;
rev=rev*10+rem;
n=n/10;
}
printf("sum=%d  and reverse is %d",sum,rev);
return 0;


}