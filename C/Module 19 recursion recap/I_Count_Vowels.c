#include<stdio.h>
#include<string.h>
int vowelcnt(char s[],int i)
{
    if(i==strlen(s))
    {
        return 0;
    }
    int cnt=vowelcnt(s,i+1);
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            cnt++;
        }
    return cnt;
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    printf("%d",vowelcnt(s,0));
    return 0;
}