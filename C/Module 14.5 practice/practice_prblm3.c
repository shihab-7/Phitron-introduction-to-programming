#include<stdio.h>
int char_to_ascii (char a)
    {
        int x,y,z;
        if(a>='a'&&a<='z')
        {
            x='a';
            return x;
        }
        if(a>='0'&&a<='9')
        {
            y='0';
            return y;
        }
        if(a>='A'&&a<='Z')
        {
            z='A';
            return z;
        }

    } 
    int main()
    {
        char a;
        scanf("%c",&a);
        printf("%d",char_to_ascii(a));
        return 0;
    }