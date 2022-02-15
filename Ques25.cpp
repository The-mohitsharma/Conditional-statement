/* wap to find whether the given character is a digit or a letter
or any other character*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch;
    cout<<"\n enter character::";
    cin>>ch;
    if(ch>= '0' &&ch<='9')
    {
        cout<<"\n it is a digit:";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"\n it is a letter:";
    }
    else{
        cout<<"\n other character:";
    }
    return 0;
}