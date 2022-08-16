#include <stdio.h>
#include<math.h>


int main()
{
    int x, y;
    int sum;
    float power;
    int ch;
    printf("enter the numbers\n");
    scanf("%d%d", &x, &y);

  

    do
    {
        printf("enter 1 for sum,2 for power\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("sum=%d", x + y);

            break;

        case 2:
            printf("power =%f",pow(x,y));
            break;

        default:
        printf("invaild command\n");
        break;
        }

    } while (ch != 0);
    return 0;
}