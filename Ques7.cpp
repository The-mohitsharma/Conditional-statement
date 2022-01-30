// wap to find the greatest number between has gien three number//
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,big=0;
    cout<<"\n enter a ::";
    cin>>a;
    cout<<"\n enter b ::";
    cin>>b;
    cout<<"\n enter c ::";
    cin>>c;
    if(a>big)
    big=a;
    if(b>big)
    big=b;
    if (c>big)
    big=c;
     cout<<" biggest of above given three number is"<<big;
    return 0;

}