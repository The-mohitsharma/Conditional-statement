/* wap to print whether a given character is an uppercase or a lowercase
vowels or any other character. */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch;
    cout<<"\n enter character:";
    cin>>ch;
    if (ch>='A'&&ch<='Z')
    {
        cout<<"\n it is a upper case:";
    }
    else if(ch>='a'&&ch<='z')
    {
        cout<<"\n it is a lower case:";
    }
    else{
        cout<<"\n it is an other character:";
    }
    return 0;
}