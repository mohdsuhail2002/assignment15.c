#include<stdio.h>
int maxn(int [],int);
int main()
{ 
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxn(a,n);
    printf("minimum number is %d",maxn(a,n));
    printf("\n");
    return 0;
}
int maxn(int num[],int N)
{
    int j;
    for(j=1;j<N;j++)
    {
        if(num[0]>num[j])
        {
            num[0]=num[j];
        }
    }
    return num[0];
}
