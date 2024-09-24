#include<stdio.h>
void evnpos(int a[],int size,int i)
{
    if(i>=size)
    {
        return;
    }
    if(i%2==0)
        {
            evnpos(a,size,i+2);
            printf("%d ",a[i]);
        }
    else
        {
           evnpos(a,size,i+1);
           printf("%d ",a[i]);
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    evnpos(a,n,0); 
    return 0;
}