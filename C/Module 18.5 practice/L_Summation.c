#include<stdio.h>
long long int summation(long long int a[],long long int size)
{
    if(size==0)
    {
        return 0;
    }
    return a[size-1]+summation(a,size-1);
    
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    printf("%lld",summation(a,n));
    return 0;
}