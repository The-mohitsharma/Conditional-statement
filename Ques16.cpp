/* wap to find whether student has passed or failed. if marks of three subject
are given.If the percentage is greater than 40 and the student is disciplined
[D] than the student has passed*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int sub1,sub2,sub3,total,percent;

    cout<<"\n enter marks1::";
    cin>>sub1;
    cout<<"\n enter marks2::";
    cin>>sub2;
    cout<<"\n enter marks3::";
    cin>>sub3;
    total=sub1+sub2+sub3;
    percent=total*100/300;
    if(percent>=40)
    {
        cout<<"\n student will be passed::";
        cout<<"\n percent is::"<<percent;
    }
    else
    {
        cout<<"\n student will be failed::";
        cout<<"\n precent is::"<<percent;
    }
    return 0;

}