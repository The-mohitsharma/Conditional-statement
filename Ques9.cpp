/* wap to input a number. if the number is even, print its sqrt other wise 
cube. */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num, sqrt, cube;
    cout<<"\n enter num :: ";
    cin>>num;
    if(num%2==0)
    {
        sqrt= num*num;
        cout<<"\n it is a sqrt number";
        cout<<"\n square of the number is :: "<< sqrt;
    }
    else{
        cube= num*num*num;
        cout<<"\n cube of the number is :: "<<cube;
    }
    return 0;
}