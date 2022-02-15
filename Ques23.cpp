/* wap to find the type of triangle[equilateral,isosceles,or scalene]
from has given three angles*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int sidea,sideb,sidec;
    cout<< "enter three side of a triangle::";
    cin>>sidea>>sideb>>sidec;
    if(sidea == sideb && sideb == sidec)
    {
        cout<<"\n It is a equilateral triangle:";
    }
    else if(sidea == sideb ||sidea == sidec ||sideb == sidec)
    {
        cout<<"\n It is a isosceles triangle:";
    }
    else{
        cout<<"\n It is a saclene triangle:";
    }
    return 0;
}