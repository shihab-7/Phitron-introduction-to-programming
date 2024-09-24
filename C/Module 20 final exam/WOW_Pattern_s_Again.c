#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            printf(" ");
        }
    if(i%2==1)
        {
            for(int j=0;j<2*i+1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    else {
            for(int j=0;j<2*i+1;j++)
            {
                printf("^");
            }
            printf("\n");
         }
    } 
    return 0;
}