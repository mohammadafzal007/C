#include<stdio.h>


// int main(){

// int a=5;
// float b =1.34;
// printf("%*f",a,b);


// return 0;
// int main()
// {
// 	int a=1,b=2,c=3;
// 	printf("%d %d %d");
// 	return 0;
// }
#include <stdio.h>
void main()
{   
	int x=10;
	// x+=(x++)+(++x)+x;
    x+=x;
    printf("%d\n",x);
    x=x++;
    printf("%d\n",x);
    x=++x;
    printf("%d\n",x);
    x+=x;
	printf("%d",x);
}
// }
