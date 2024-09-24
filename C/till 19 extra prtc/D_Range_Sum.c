#include<stdio.h>
int main()
{
    long long int a,b,s,d,temp;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        d=(b-a)+1;
        s=(a+b)*d;
        s=s/2;
        printf("%lld\n",s);
    } 
    return 0;
}