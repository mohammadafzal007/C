#include<stdio.h>
int main(){
    int beg,mid,end;
    int a[30];
    int size,search;
    
    printf("enter the size of array\n");
    scanf("%d",&size);

    printf("array\n");

    for (int i = 0; i <size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value which you want to search\n");
    scanf("%d",&search);
    beg=0;
    end=size-1;
    mid=(beg+end)/2;

    while (beg<=end)
    {      if (search>a[mid])
        {
            beg=mid+1;
        }
        else if (search==a[mid])
        {
            printf("serach found at %d position\n",mid+1);
            break;
        }
        
        if (search<a[mid])
        {
            end=mid-1;
         mid=(beg+end)/2;
           
        }
      
        
    }

    if (beg>end)
    {
        printf("search is not found\n");
    }
    return 0;
}