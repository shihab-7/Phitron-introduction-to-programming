#include<stdio.h>
int replace_it(int x)
{
    x=500;
    return x;
}
int main()
{
     int a=1;
     printf("before  a=%d\n",a);
     printf("only when calls for returning a=%d\n", replace_it(a));
     printf("after  a=%d",a);//the value do not changed by the calling function
    return 0;
}