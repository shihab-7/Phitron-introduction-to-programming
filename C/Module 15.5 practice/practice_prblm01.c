#include<stdio.h>
int my_abs(int a)
{
    int x;
    if(a<0)
    {
        x=a*-1;
        return x;
    }
    else
    return a;
}
int main()
{
     int c,d;
     scanf("%d",&c);
     d=my_abs(c);
    printf("%d",d);
    return 0;
}