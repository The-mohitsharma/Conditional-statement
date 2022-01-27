//wap to check whether the person is eligible to vote or not//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"\n tell me your age :: ";
    cin>>age;
    if(age >=18)
    {
        cout<<"eligible to vote"<<endl;
    }
    else if(age==18)
    {
        cout<< "consider to vote"<<endl;
    }
    else
    {
        cout<<"get out not eligible "<<endl;
    }


    return 0;
}