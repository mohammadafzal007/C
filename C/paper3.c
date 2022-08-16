#include<stdio.h>
int main()
{
int i=1;
while (i<5)
{
    printf("i=%d\n",i);
    if(i%2==0)
    continue;
    printf("end of %d th iteration\n",i);
    i++;
}
printf("end");
return 0;

}