#include <stdio.h>
#include<math.h>

int fact(int) ;


int fact(int x);
    {
        int i, f = 1;
        for (i = 1; i <= x; i++)
        {
            f = f * i;
        }
    }

int main()
{
    int x, y;
    int sum, comb;
    float power;
    int ch;
    printf("enter the numbers\n");
    scanf("%d %d", &x, &y);

        printf("enter a for sum,b for combination,c for power and d for exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 'a':
            printf("sum=%d", x + y);

            break;

        case 'b':
            printf("power =%f",pow(x,y));
            break;

        case 'c':printf("combination=%d",fact(x)/(fact(y)*fact(x-y)));
        break;

        case 'd':printf("exit");
        break;

        default:
        printf("invaild command\n");
        }

    
    return 0;
}