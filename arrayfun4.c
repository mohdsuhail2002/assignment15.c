#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int a[N], i, temp, pos, dir;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Enter the number of positions to shift\n");  
    scanf("%d", &pos);  
  
    printf("Enter the direction of shifting ...\n");  
    printf("LEFT: 1 and RIGHT: 0\n");  
    scanf("%d", &dir);  
  
    while(pos)  
    {  
        if(dir)  
        {  
            temp = a[0];  
            for(i = 0; i < N - 1; i++)  
                a[i] = a[i + 1];  
  
            a[N - 1] = temp;  
        }  
        else  
        {  
            temp = a[N - 1];  
            for(i = N - 1; i > 0; i--)  
                a[i] = a[i - 1];  
  
            a[0] = temp;  
        }  
  
        pos--;  
    }  
  
    printf("Array after shift operation ...\n");  
    for(i = 0; i < N; i++)  
        printf("%d\t", a[i]);  
  
    printf("\n");  
  
    return 0;  
}  
