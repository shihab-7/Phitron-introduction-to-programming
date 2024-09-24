#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt[3]={0};
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            cnt[0]++;
        }
        if(a==b)
        {
            cnt[1]++;
        }
        if(a<b)
        {
            cnt[2]++;
        }
    }
    if(cnt[0]>cnt[2])
    {
        printf("Tiger");
    }
    else if(cnt[0]<cnt[2])
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}