#include<stdio.h>
void change_it(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[size-1])
        {
            a[i]=100;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    change_it(x,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}