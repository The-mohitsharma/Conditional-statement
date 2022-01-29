//wap to find whether a number is positive or negative or zero//
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int num;
cout<<"\n enter num ::";
cin>>num;

//Nested if else condition //
if( num!=0) //  outer condition //
{
    if(num>=0)  // first inner condition //
    {
        cout<<"\n this is postive number";
    }
    else{ //  first inner else condition //
        cout<<"\n the number is negative";
    }
}
// outer else condition //
else{
    cout<<"\n the number is 0 and it is neither be positive nor be negative";

}
return 0;
}

    