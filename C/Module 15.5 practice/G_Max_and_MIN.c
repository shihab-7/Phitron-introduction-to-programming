#include<stdio.h>
void min_max(int a[],int size)
{
    int max,min;
    max=min=a[0];
    for(int i=0;i<size-1;i++)
    {
        if(a[i]>=max)
        max=a[i];
        if(a[i]<=min)
        min=a[i];
    }
    printf("%d %d",min,max);
}
int main()
{
     int n;
     scanf("%d",&n);
     int c[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&c[i]);
     }
     min_max(c,n);
    return 0;
}