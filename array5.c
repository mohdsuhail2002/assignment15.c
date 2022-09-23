#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("enter the 10 value");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {   
        if(a[0]>a[i])
        {
            a[0]=a[i];
        }

    } 
    printf("smallest is %d",a[0]);
    printf("\n");
    return 0;
}