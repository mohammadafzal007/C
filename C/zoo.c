// #include<iostream.h>
#include<stdio.h>

int main()
{
int n;
int Amount;
printf("Enter no. of Person\n");
scanf("%d",&n);

if(n>=10){
Amount=4*n;
printf("Amount = %d",Amount);
}
else
{
Amount=5*n;
printf("Amount = %d",Amount);
}

return 0;

}