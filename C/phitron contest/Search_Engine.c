#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        int a[x];
        for(int i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
        int num,y=0,pos;
        scanf("%d",&num);
        for(int i=0;i<x;i++)
        {
            if(a[i]==num)
            {
                pos=i+1;
                y=1;
                break;
            }
        }
        if(y==1)
            {
                printf("Case %d: %d\n",i,pos);
            }
            else
            printf("Case %d: Not Found\n",i);
    } 
    return 0;
}