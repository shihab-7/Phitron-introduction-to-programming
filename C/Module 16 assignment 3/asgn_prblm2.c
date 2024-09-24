#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int f=0;f<s;f++)
        {
            printf(" ");
        }
        s--;
        for(int j=0;j<k;j++)
        {
            printf("%d",k);
        }
        k++;
        printf("\n");
    } 
    return 0;
}