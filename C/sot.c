#include<stdio.h>
int main(){
    
    
    int a[30],size,temp;
  printf("enter the size oF arry\n");
  scanf("%d",&size);
  printf("enter the array\n");

    
    
    for (int i = 0; i <size; i++)
  {
      scanf("%d",&a[i]);
  }
    for (int i = 0; i <size-1; i++)
    {
        int min=i;
        for (int j = i+1; j <size; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
        if (min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=a[min];
        }
        
    }
    
    
    printf("sorted array\n");
    for (int i = 0; i <size; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}