#include<stdio.h>
int main()

{
float w,h;
 int count=0;
int i;
printf("enetr the weight and height of 5 boys");

for(i=0;i<5;i++)
{
scanf("%f %f ",&w,&h);
if(w<50 && h>160)
count++;

}
printf("no. of boys with weight less than 50 and height greater than 160 are %d",count);


}