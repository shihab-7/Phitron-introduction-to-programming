#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[cnt]=a[i];
            cnt++;
        }
    }
    while(cnt<n)
    {
        a[cnt]=0;
        cnt++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}