/* wap to find the greatest no between has given three nos */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,big=0;
    cout<<"\n enter A ::";
    cin>>a;
      cout<<"\n enter B ::";
    cin>>b;  
    cout<<"\n enter C ::";
    cin>>c;
    if (a>big)
    big=a;
    if (b>big)
    big=b;
    if (c>big)
    big=c;
    cout<<"\n biggest of above given three number is ::"<<big;
    return 0;
}