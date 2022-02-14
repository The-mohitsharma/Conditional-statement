/* wap to input principle amount and time.it time is more than 10 years
,calculate the simple interest with 8 % , other wise calculate it with rate
12 % per annum */

#include<bits/stdc++.h>
using namespace std;
int main()
{
int amount, time, SI;
cout<<"\n enter the amount :: ";
cin>>amount;
cout<<" enter time in years ::";
cin>>time;
if(time >=10)
{

    SI= (amount*time*8)/100;
    cout<<"\n si with 8% is ::"<<SI;
}
     else
    {
      SI= (amount*time*12)/100;
        cout<<"\n si with 12% annum ::"<<SI;
  }

return 0;
}