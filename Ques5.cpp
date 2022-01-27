// wap to find whether a year is loop year or non leap year. //
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int year;
cout<<"\n enter year ::";
cin>>year;
if (year%4==0)
{
    cout<<"\n its is a leap year";
}
else if(year%4!=0)
{
    cout<<"\n it is not a leap year";
}
else{
    cout<<"\n done";
}
return 0;


}