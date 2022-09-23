#include<stdio.h>
int main()
{
    int a[10];
    int i,se=0,so=0;
    printf("enter 10 valuse");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        {
            so=so+a[i];
        }
    }
    printf("sum of even numbers are %d\n",se);
    printf("sum of all odd numbers are %d",so);
    printf("\n");
    return 0;
}