#include<stdio.h>
int main()
{
int b=10,c=12,d=4;
int a;
a=b&c+sizeof(4.32)-8/d;
printf("a=%d",a);
return 0;

}