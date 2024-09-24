#include<stdio.h>
void prntrngtn(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d",n);
    if(n!=1)
    {
        printf(" ");
    }
    prntrngtn(n-1);
}
int main()
{
     int d;
     scanf("%d",&d);
     prntrngtn(d);
    return 0;
}