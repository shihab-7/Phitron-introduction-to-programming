#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=k)
    {
         int min=a[i];
         for(int j=i+1;j<i+k&&j<n;j++)
         {
            if(a[j]<min)
            {
                min=a[j];
            }
         }
         printf("%d ",min);
    }
    return 0;
}