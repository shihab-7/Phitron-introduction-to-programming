#include<stdio.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int cnt[3]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            cnt[0]++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            cnt[1]++;
        }
        if(s[i]==' ')
        {
            cnt[2]++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",cnt[0],cnt[1],cnt[2]);
    return 0;
}