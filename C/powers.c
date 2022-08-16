#define N 10000000000
#include<stdio.h>

int main()

{
double a;
int i=1,x;
printf("Enter the number ");
scanf("%d",&x);
a=x;

{
while(a<N)
{
printf("%d ^ %d= %lf\n",x,i,a);
a*=x;
i++;
}
}
return 0;
}