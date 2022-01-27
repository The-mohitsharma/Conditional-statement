/* wap to find whether a person will get commission or not by his salary. if 
the sales is greater than 50000 then he receives a commission. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int salary;
    cout<<"\n enter salary ::";
    cin>>salary;
    if (salary<=50000)
    {
       cout<<"\n he is not getting commisssion"; 
    }
    else if(salary>=50000)
    {
        cout<<"\n he is getting commission";
    }
    else {
        cout<<"\n you are safe";
    }
    return 0;
}