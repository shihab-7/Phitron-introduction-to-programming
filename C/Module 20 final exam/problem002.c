#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n,a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flag=0;
                break;
            }
           else if(i!=j && a[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
    printf("YES");
    else
    printf("NO");
    return 0;
}