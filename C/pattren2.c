#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j =n; j>=i; j--)
        {
printf("*");
    }
    //    {
            // if ((j-i) >= 0)
                // printf("*");
            // else
                // printf(" ");
        // }
    
    printf("\n");
    }
return 0;
}