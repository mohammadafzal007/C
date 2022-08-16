#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {

        for (j = 1; j<=(n-i); j++)
        {
            printf(" ");
        }
        for (k = 1; k<=(2*i)-n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}