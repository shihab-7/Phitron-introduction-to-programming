#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int sum,s,a,b,c;
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        sum=a+b+c;
        s=s-sum;
        printf("%lld\n",s);
    }
    return 0;
}