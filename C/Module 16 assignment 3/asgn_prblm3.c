#include<stdio.h>
int count_before_zero(int a[],int size)
{
    int count=0;
    while(a[count]!=0 && count<size )
    {
        count++;
    }    
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("%d",count_before_zero(x,n));
    return 0;
}