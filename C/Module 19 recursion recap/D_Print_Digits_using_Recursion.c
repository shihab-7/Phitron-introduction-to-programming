#include<stdio.h>
void ndgt(int x)
{
    if(x<10)
    {
        printf("%d ",x);
        return;
    }
    ndgt(x/10);
    printf("%d ",x%10);

}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        ndgt(a);
        printf("\n");
    }
    return 0;
}