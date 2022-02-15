/* wap to calculate commission for the salesmen,The commissionis calculated
according to the following rates*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int sales;
    cout<<"\n enter sales::";
    cin>>sales;
    if(sales>=35000)
    {
        cout<<"\n rate is 15% ::";
    }
    else if((sales>=22000)&&(sales<=30000))
    {
        cout<<"\n rate is 10% ::";
}
    else if((sales>=12000)&&(sales<=22000))
    {
        cout<<"\n rate is 7% ::";
}
    else if((sales>=5000)&&(sales<=12000))
    {
        cout<<"\n rate is 3% ::";
}
    else if((sales>=0)&&(sales<=5000))
    {
        cout<<"\n rate is 0% ::";
}
else{
    cout<<"\n wrong input::";
}
return 0;
}

