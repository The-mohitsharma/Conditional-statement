/* wap to accept the marks obtained by a student in phy,chem,Maths
.Display the grade on the following condition. */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int marks, phy,chem,maths;
    cout<<"\n enter phy  marks::";
    cin>>phy;
    cout<<"\n enter chem marks::";
    cin>>chem;
    cout<<"\n enter maths  marks::";
    cin>>maths;
if(phy>=50&&chem>=50&&maths>=50)
    {
        cout<<"\n Grade 'A' :";
    }
else if(phy>=50&&maths>=50||chem!=50)
    {
        cout<<"\n Grade 'B' :";
    }
else if(maths>=50||phy!=50||chem!=50)
    {
        cout<<"\n Grade 'C' :";
    }
else if(phy<=50||chem<=50||maths<=50)
    {
        cout<<"\n Grade 'D' :";
    }
    else{
        cout<<"\n Give  paper again:";
    }
    return 0;

}