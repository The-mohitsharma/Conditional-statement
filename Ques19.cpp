/* wap to find the result of a student on the following condition */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int marks,result;
    cout<<"\n enter marks ::";
    cin>>marks;
    if(marks<40)
    {
        cout<<"\n fail::";
    }
    else if((marks>=40)&&(marks<=50))
    {
        cout<<"\n you are third::";
    }
    else if ((marks>=50)&&(marks<=60))
    {
        cout<<"\n you are second::";
    }
    else if((marks>=60)&&(marks<=100))
    {
        cout<<"\n you are first::";
    }
    else {
        cout<<"\n give a paper again::";
    }


}