#include<stdio.h>
void sorting(int *a,int *b,int *c)
{  
    int temp;
    if(*a>*b)
    {
        temp=*a;
        *a=*b;
       *b=temp;
    }
    if(*a>*c)
    {
        temp=*a;
        *a=*c;
        *c=temp;
    }
    if(*b>*c)
    {
        temp=*b;
        *b=*c;
       *c=temp;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=a,y=b,z=c;
    sorting(&a,&b,&c);
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}