#include "ClntN.h"



class ClntN0 : public ClntN
{
public:
    ClntN0(){SetZero();}
    ~ClntN0(){Clean();}
     ClntN0(const ClntN0 &b):ClntN(b){};
    ClntN0(const bool r,const int m, const vector<int> brr, const string filename):ClntN(r,m,brr,filename){};
    ClntN0(const bool r,const int m, const vector<int> brr):ClntN(r,m,brr){};
    ClntN0(const bool r,const int m, const int* brr,const string filename):ClntN(r,m,brr,filename){};
    using ClntN::SetZero;
    using ClntN::Clean;
    using ClntN :: operator=;
    using ClntN ::CopyOnly;
    friend ClntN0 operator+(const ClntN&a,const ClntN&b);
    friend ClntN0 operator-(const ClntN&a,const ClntN&b);
    int output() override
    {
        ofstream file(FileName, ios::app);
        if(!file)
        {
            cout<<"Error! Cannot open file..."<<endl;
            return -1;
        }
        if(s==true)
        {
            file<<"+";
        }
        else
        {
            file<<"-";
        }
        for(int i=0; i<n; i++)
        {
            file<<arr[i];
        }
        file<<endl;
        file.close();
        return 0;
    }
};
