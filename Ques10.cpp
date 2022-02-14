/*  wap to input choice [1 or 2] if choice is 1, print area of circle
otherwise print he perimeter of circle. Accept the radius of the 
circle from user. */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int radius, opt;
float area, peri, pi=3.14;
cout<<"\n enter opt :: ";
cin>>opt;
    cout<<"\n enter radius :: ";
    cin>>radius;

    if(opt==1)
    {
    area= 3.14*radius*radius;
    cout<<"\n area of circle is :: "<< area;
    }
    else {
        peri= 2*3.14*radius;
        cout<<"\n perimeter of circle is :: "<< peri;
    }
    return 0;
}