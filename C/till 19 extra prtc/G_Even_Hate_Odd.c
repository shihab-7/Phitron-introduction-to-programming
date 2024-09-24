#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,evn=0,odd=0;
        scanf("%d",&a);
        int x[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&x[i]);
        }
        for(int i=0;i<a;i++)
        {
            if(x[i]%2==1)
            odd++;
            else
            evn++;
        }
        if(a%2==1)
        printf("-1\n");
        else
        printf("%d\n",abs(evn-odd)/2);

    } 
    return 0;
}