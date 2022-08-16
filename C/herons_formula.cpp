
// Online C compiler to run C program online
#include <stdio.h>

#include<math.h>

int main()
{
    int a, b, c;
    int Area;
    int s;
    printf("Enter side 1 of Triangle: ");
    scanf("%d", &a);
    printf("Enter side 2 of Triangle: ");
    scanf("%d", &b);
    printf("Enter side 3 of Triangle: ");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    Area = sqrt (s*(s - a)*(s - b)*(s - c));
    printf("Area of Triangle : %d\n", Area);

    return 0;
}