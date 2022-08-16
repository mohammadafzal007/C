
#include<math.h>
#include<stdio.h>
int main()

{
double x,y,power;
printf("enter the base value =  ");
scanf("%lf",&x);
printf("enter the exponent value =  ");
scanf("%lf",&y);

power=pow(x,y);
printf("%lf ^ %lf = %lf",x,y,power);

return 0;
}
