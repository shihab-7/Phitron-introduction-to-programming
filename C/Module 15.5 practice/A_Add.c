#include<stdio.h>
int sum(int a,int b )
{
    int s=a+b;
    return s;
}
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=sum(a,b);
    printf("%d",x);
    return 0;
}