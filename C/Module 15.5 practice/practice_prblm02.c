#include<stdio.h>
int my_len(char *a)
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char c[1000];
    scanf("%s",c);
    printf("%d",my_len(c));
    return 0;
}