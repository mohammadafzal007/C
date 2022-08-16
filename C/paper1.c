#include<stdio.h>
int main()
{
int a=12,b=10,c=18,d=0;
int e;
e=!a>b||c&&d++;
printf("e=%d,d=%d",e,d);
return 0;

}