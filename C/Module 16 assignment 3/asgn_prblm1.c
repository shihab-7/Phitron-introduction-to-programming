#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=0;i<n;i++)
    {
        for(int f=0;f<s;f++)
        {
            printf(" ");
        }
        s--;
        for(int j=1; j<=k;j++)
        {
            printf("%d",j);
        }
        k+=2;
        printf("\n");
    } 
    int b=2*n-3;
    for(int i=0;i<n-1;i++)
    {
        for(int f=0;f<s+2;f++)
        {
            printf(" ");
        }
        s++;
        for(int j=1;j<=b;j++)
        {
            printf("%d",j);
        }
        b-=2;
        printf("\n");
    }
    return 0;
}