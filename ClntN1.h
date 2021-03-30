#include "ClntN0.h"





class ClntN1 : public ClntN
{
protected:
     string FileName;
public:
    ClntN1(){SetZero();}
    ~ClntN1(){Clean();}
    ClntN1(const bool r,const int m, const vector<int> brr ,const string filename);
    ClntN1(const ClntN1 &b):ClntN(b){};
    //ClntN1(const bool r,const int m, const vector<int> brr, const string filename):ClntN(r,m,brr,filename){};
    ClntN1(const bool r,const int m, const vector<int> brr):ClntN(r,m,brr){};
    ClntN1(const bool r,const int m, const int* brr,const string filename):ClntN(r,m,brr,filename){};
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
            file<<"+"<<endl;
        }
        else
        {
            file<<"-"<<endl;
        }
        for(int i=0; i<n; i++)
        {
            file<<arr[i]<<endl;
        }
        file<<"======="<<endl;
        file.close();
        return 0;
    }
};
