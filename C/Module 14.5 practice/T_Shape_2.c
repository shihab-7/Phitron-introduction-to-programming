#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=0;i<n;i++)
    {
        for(int f=0;f<s;f++)
        {
            printf(" ");
        }
        s--;
        for(int j=0; j<k;j++)
        {
            printf("*");
        }
        k+=2;
        printf("\n");
    } 
    return 0;
}