#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b&&b==a&&a==c)&&(a!=0&&b!=0&&c!=0))
    printf("Yes\n");
    else
    printf("No\n"); 
    return 0;
}