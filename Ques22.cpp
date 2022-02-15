/* wap to find the sum of gratest no and lowest no between has given three nos . */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c, small, greater;
    cout<<"\n enter A ::";
    cin>>a;
      cout<<"\n enter B ::";
    cin>>b;  
    cout<<"\n enter C ::";
    cin>>c;
    small=a, greater=b;
    if (b<small)
    {
    small=b;
    }
    if(c<small)
    {
        small=c;
    }
    if(c>greater)
    {
        greater=c;
    }
    if(b>greater)
    {
        greater=b;
    }
    cout<<"\n the smallest number is::"<<a <<" "<<b <<" "<<c <<" ::" <<small;
   cout<<"\n the greater number is::"<<a <<" "<<b <<" "<<c <<" ::" <<greater;
return 0;
}