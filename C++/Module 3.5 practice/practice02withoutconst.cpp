#include<bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
	int jersey_no;
	char country[100];
};

int main()
{
    cricketer *dhoni= new cricketer;
    dhoni->jersey_no=7;
    char c[100]="india";
    strcpy(dhoni->country,c);

    cricketer *kholi= new cricketer;
    *kholi=*dhoni;

    delete dhoni;

    cout<<kholi->jersey_no<<endl;
    cout<<kholi->country;
    return 0;
}