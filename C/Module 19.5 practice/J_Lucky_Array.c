#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    int min=INT_MAX,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        cnt++;
    }
    if(cnt%2==0)
    printf("Unlucky");
    else
    printf("Lucky");
    return 0;
}