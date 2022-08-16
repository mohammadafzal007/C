#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j<= n; j++)

       {
            if ((i-j) > 0)
                printf(" ");
            else
                printf("*");
        }
    
    printf("\n");
    }
return 0;
}