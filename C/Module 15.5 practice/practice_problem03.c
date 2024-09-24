#include<stdio.h>
int odd_cnt_ary(int a[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            count++;
        }
    }
    return count;
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
     printf("%d",odd_cnt_ary(x,n));
    return 0;
}