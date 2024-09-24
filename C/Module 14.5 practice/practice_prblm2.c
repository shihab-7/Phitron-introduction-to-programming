#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=(2*n)-1;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<k;i++ )
        {
            printf(" ");
        }
        k++;
        for(int j=0;j<s;j++)
        {
            printf("*");
        }
        s-=2;
        printf("\n");
    } 
    return 0;
}