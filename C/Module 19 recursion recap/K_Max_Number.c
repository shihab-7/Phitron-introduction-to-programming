#include<stdio.h>
int maxval(int x[],int size)
{
    if(size==1)
    {
        return x[0];
    }
    int max=maxval(x,size-1);
    if(x[size-1]>max)
    max=x[size-1];
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",maxval(a,n));
    return 0;
}