#include<stdio.h>
int main()
{
int month,days;

printf("Enter the days ");
scanf("%d",&days);

month=days/30;
days=days%30;

printf("NO. OF MONTHS ARE %d  and No. of days are %d",month,days);
return 0;

}