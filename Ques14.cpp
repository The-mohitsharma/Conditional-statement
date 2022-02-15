/* wap to find the type of whether on a given day. If the temp is less 
than 20 it is cold.If the temp is greater than 40  it is hot day temp is b/w
20 to 40 is normal day.
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int day, temp;
    cout<<"\n enter day ::";
    cin>>day;
    cout <<"\n enter temp ::";
    cin>>temp;
    if((temp>=10)&&(temp<=20))
    {
        cout<<"\n its cold day ::";
    }
    else if((temp>=20)&&(temp<=40))
    {
        cout<<"\n its hot day::";
    }
    else if((temp>=2)&&(temp<=9))
    {
        cout<<"\n its a normal day ::";
    }
    else {
        cout<<"\n good bye::";
    }
return 0;
}