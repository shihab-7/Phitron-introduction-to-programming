#include<stdio.h>
void replace_it(int *a)
{
    *a=500;
}
int main()
{
     int a=1;
     
     printf("before  a=%d\n",a);
     replace_it(&a);
     printf("after  a=%d",a);//the values changed by the calling function
    return 0;
}