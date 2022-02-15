/* wap to find whether a person is child, teen, youth, or old, depending
on his/her age on the following condition. */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int age;
    cout<<"\n enter age::";
    cin>>age;
    //using nested if condition. //
   if(age>=1)
    {
        cout<<"\n you are child::";
        if(age>=14)
        {
            cout<<"\n you are teen::";
            if(age>=21)
            {
                cout<<"\n you are youth::";
                if(age>=50)
                {
                    cout<<"\n you are old::";
                }

            }
        }
    }
    else
    {
        cout<<"\n you are a baby child::";
    }

    return 0;
}