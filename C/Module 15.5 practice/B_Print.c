#include<stdio.h>
void series(int a)
{
    for(int i=1;i<=a;i++)
    {
     printf("%d",i);
     if (i!=a)
     printf(" ");
    }
}
int main()
{
    int d;
    scanf("%d",&d);
    series(d);
}