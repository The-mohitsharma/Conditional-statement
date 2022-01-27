// wap  to find whether a number is even or odd//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"\n enter number ::";
    cin>>num;

    if(num%2==0)
    {
        cout<<"\n even";
    }
    else if(num%2!=0)
    {
        cout<<"\n it is odd";
    }
    else {
        cout<<"\n done";
    }
    return num;
}