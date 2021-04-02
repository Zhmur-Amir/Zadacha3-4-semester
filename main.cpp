#include "wh.h"
#pragma once

int main(void)
{
cout<<endl<<"Starting program..."<<endl<<endl;
ofstream out1("Data1.txt"), out2("Data0.txt");
if(!out1 || !out2)
        {
            cout<<"Error! Cannot open file..."<<endl;
            return -1;
        }
out1.close();
out2.close();
PyatiletkyV4Goda("Data.txt");
cout<<endl<<"============================="<<endl<<endl;
Autotest();
Auto();



/* vector<int> j,h;
 j.push_back(4);
 j.push_back(9);
j.push_back(9);
h.push_back(4);
 h.push_back(8);
h.push_back(8);
 ClntN0 s(true,3,j),k,x(true,3,h);
 k=s-x;

 cout<<k<<endl;
*/
/*ClntN1 a4(true,3,j);
ClntN0 b4(a4);
ClntN0 c4(true,3,j);
b4=a4+c4;
cout<<"dfg"<<c4<<b4<<endl;*/




vector<int> a, b;
//srand(time(0));
a.push_back(1);
a.push_back(0);
b.push_back(0);
b.push_back(0);
/*for(int i=0; i<1000000; i++)
{
    a.push_back(5);
    b.push_back(4);
}*/
for(int i=0; i<1000000; i++)
{
   for(int j=0; j<10; j++)
   {
    a.push_back(j);
    b.push_back(j);
   }

}
/*a.push_back(0);
a.push_back(1);
b.push_back(0);
b.push_back(0);*/
 ClntN0 a1(true,9000002,a),b1(true,9000002,b),d,c,u(true,9000002,a),h(true,9000002,b);
    d=u+h;
    c=a1-b1;
 a.clear();
 b.clear();

return 0;
}
