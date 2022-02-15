/*   wap for temperature conversion from fahrenheit to celsius or  celsius
to fahrenheit according to user choice*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
float  temp, fahren, celsius,choice;
cout<<"\n enter temp ::";
cin>>temp;
cout<<"\n enter choice ::";
cin>>choice;
if(choice==1)
{
    // celsius to fahren .//
    celsius= 5* (temp-32)/9;
    cout<<"\n celsius ::"<< celsius;
}
else if(choice==2)
{
    //fahren to celsius .//
    fahren= 5*(temp-32)/9;
    cout<<"\n fahren ::"<<fahren;
}
else{
    cout<<"\n wrong choice:: ";
}
return 0;

}
