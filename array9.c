#include<stdio.h>
void display(int [],int);
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d value of array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);
    printf("\n");
    return 0;


}
void display(int num[],int N)
{  
    int i;
    for(i=N-1;i>=0;i--)
    {
        printf("%d\n",num[i]);
    }
}