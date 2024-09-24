#include<stdio.h>
char sml_to_cap(char a)
{
    a=a-32;
    return a;
}
int main()
{
     char a;
     scanf("%c",&a);
     printf("%C",sml_to_cap(a));
    return 0;
}