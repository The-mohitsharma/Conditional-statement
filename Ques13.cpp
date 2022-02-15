/* wap to find whether a perdon has made profit loss.if the cost price
and selling price of an article is given.Also display the profit or loss*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cp,sp,profit,loss;
    cout<<"\n enter cost price ::";
    cin>>cp;
    cout<<"\n enter sold price ::";
    cin>>sp;
    if((cp>=1000)&&(sp>=3500))
    {
        cout<<"\n person is in profit ::";
        profit= sp-cp;
        cout<<"\n profit is ::"<<profit;
    }
    else if((cp>=1000)&&(sp<=3500))
    {
        cout<<"\n person is in loss ::";
        loss= sp-cp;
    cout<<"\n loss is ::"<<loss;
    }
    else{
        cout<<"\n wrong input ::";
    }
return 0;
}