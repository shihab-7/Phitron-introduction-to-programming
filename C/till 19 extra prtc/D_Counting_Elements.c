#include<stdio.h>
#define MAX 1001
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int cnt=0,b[MAX]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    } 
    for(int i=0;i<MAX-1;i++)
    {
         if(b[i]>0&&b[i+1]>0)
            {
                cnt+=b[i];
            }
    }
    printf("%d ",cnt);
    return 0;
}