#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
    int len=strlen(a),x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]!=a[len-i-1])
        {
            x=1;
            break;
        }
    }
    if(x==1)
        return 0;
    else
        return 1;

}
int main()
{
    char s[11];
    scanf("%s",s);
    if(is_palindrome(s))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}