/* wap to input a number. if the number is odd positive, print 
the square root otherwis print n^5 */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int num, sqrt, penta;

cout<<"\n enter number ::";
cin>>num;
if(num%2!=0)
{
    cout<<"\n this is odd positive";
    sqrt= num*num;
    cout<<"\n square of the num ::"<<sqrt;
}
else{
    penta= num*num*num*num*num;
    cout<<"\n n^5 is ::"<<penta;
}
return 0;
}
