#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    while(n--)
    {
        long long int a;
        scanf("%lld",&a);
        int cnt=0;
        while(a%2==0)
        {
            a/=2;
            cnt++;
        }
        if(cnt>max)
            {
                max=cnt;
            }
    }
    
    printf("%d",max);
    return 0;
}