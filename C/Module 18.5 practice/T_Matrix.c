#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    m=n;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
            d1=d1+a[i][i];
            d2=d2+a[i][n-i-1];
    }
    int x=d1-d2;
    printf("%d",abs(x));
    return 0;
}