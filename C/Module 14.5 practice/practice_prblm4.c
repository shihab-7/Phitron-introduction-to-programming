#include<stdio.h>
char cap_to_sml(char a)
{
     a=a+32;
     return a;
}
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c",cap_to_sml(a)); 
    return 0;
}