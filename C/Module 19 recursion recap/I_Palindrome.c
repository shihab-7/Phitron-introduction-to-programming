#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int x=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        x=1;
    }
    if(x==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}