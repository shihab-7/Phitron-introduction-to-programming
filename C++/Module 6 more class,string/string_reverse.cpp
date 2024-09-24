#include<bits/stdc++.h>
using namespace std;
void str_rev(stringstream & word) /* & operator stringstream er
 jonno obossoi dite hoy, & diye reference bujhay string class k 
 pointer hishabe pathano jay na jonno & use korte hoy*/
{
    string box;
    if(word>>box)//word theke akta akta kore box a pathaise
    {
        str_rev(word);//recursion er jonno bar bar string komse + update hoise
        cout<<box<<endl; //function call er por print korle reverse hoy
    }
}
int main()
{
    string x;
    getline(cin,x);
    stringstream word(x); // serially string er word print korar jonno 
    str_rev(word); //function call hoise reverse er
    return 0;
}