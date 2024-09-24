#include<stdio.h>
void prnt(int n)
{
    if(n==0)
    {
        return;
    }
    printf("I love Recursion\n");
    prnt(n-1);
}
int main()
{
    int d;
    scanf("%d",&d);
    prnt(d);
    return 0;
}