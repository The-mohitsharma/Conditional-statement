//wap to accept three number and display the number in ascending order. //
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int a,b,c;
    cout<<"\n enter A:";
    cin>>a;
    cout<<"\n enter B:";
    cin>>b;
    cout<<"\n enter C:";
    cin>>c;
     
 if( a<b && a<c && b>c ){
cout<< "large" <<a<<endl;
 cout<<"middle "<<c<<endl;
 cout<< "large" <<b<<endl;}
 
 
 
 else if( a<b && a<c && b<c ) {
 
 
 
 cout<< "large" <<a<<endl;
 cout<<" middle "<<b<<endl;
 cout<< "large" <<c<<endl;
 }
 
 
 
 else if ( b<a && b<c && c>a ){
 
 
 cout<< "large" <<b<<endl;
 cout<<"middle "<<a<<endl;
 cout<< "large" <<c<<endl;
 }
 
 else if ( b<a && b<c && c<a ){
 
 
 cout<< "large" <<b<<endl;
 cout<<"middle "<<c<<endl;
 cout<< "large" <<a<<endl;
 }
 
 
 else if ( c<a && c<b && a>b){
 
 
 
 cout<< "large" <<c<<endl;
 cout<<"middle "<<b<<endl;
 cout<< "large" <<a<<endl;
 
 }
 
 else if ( c<a && c<b && a<b){
 
 
 
 cout<< "large" <<c<<endl;
 cout<<"middle "<<a<<endl;
 cout<< "large" <<b<<endl;
 
 }
  
return 0;

}