#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt[26]={0};
    for(int i=0;i<n;i++)
    {
        char c=getchar();
        while(c<'a'||c>'z')
        {
            c=getchar();
        }
        cnt[c-'a']++;
    }
    for(int i=0;i<26;i++)
        {
            for(int j=0;j<cnt[i];j++)
            putchar(i+'a');
        }
    return 0;
}