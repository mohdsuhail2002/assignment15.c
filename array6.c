#include<stdio.h>
int main()
{
    int num[10];
    int i,j,a=0;
    printf("enter the 10 values");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
        printf("%d\n",num[i]);
    }
    printf("\n");
    return 0;
}