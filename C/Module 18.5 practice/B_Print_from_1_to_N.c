#include<stdio.h>
void prntrng(int n)
{
    if(n==0)
    {
        return;
    }
    prntrng(n-1);
    printf("%d\n",n);
}
int main()
{
    int d;
    scanf("%d",&d);
    prntrng(d);
    return 0;
}