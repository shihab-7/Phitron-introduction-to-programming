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
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=0;j<i/2;j++)
            {
            int temp=a[j];
                a[j]=a[i-j-1];
                a[i-j-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     
    return 0;
}
