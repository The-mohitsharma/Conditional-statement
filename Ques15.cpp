/* wap to find the wether a person is beow weight, normal weight, or above
weight, and if the weight is less than 40 it below weight is above 80 it is above weight
,and if the weight iss b/w to 80 is normal weight */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int weight;
    cout<<"\n enter weight::";
    cin>>weight;
    if ((weight>=0)&&(weight<=40))
    {
        cout<<"\n its below weight::";
    }
    else if ((weight>=65)&&(weight<=80))
    {
        cout<<"\n its above weight::";
    }
    else if ((weight>=45)&&(weight<=65))
    {
        cout<<"\n its normal weight::";
    }
    else
    {
        cout<<"\n wrong input::";
    }
    return 0;

}