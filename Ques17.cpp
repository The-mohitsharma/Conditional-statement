/* wap to find the wether a person is eligible for driving license
or not on the following condition.If the person age is greater than eyesight
is good[G] than he/she is granted the license*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int age;
    char ch;
    cout<<"\n enter eyesight::";
    cin>>ch;
    cout<<"\n enter age::";
    cin>>age;
    if((age>=18)&&(ch='G'))
    {
        cout<<"\n person is eligible for license::";
        
    }
  else if((age<=18)&&(ch!='G'))
  {
      cout<<"\n not eligible for license::";
  }
  else{
      cout<<"\n wrong input::";
  }
    return 0; 
}