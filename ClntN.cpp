#include "ClntN.h"

void ClntN :: print()
{
    bool d=true;
    if(n==0)
        cout<<"Zero ClntN";
    else{
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
            d=false;
        }
        if (d==true){
        for(int i=0; i<n; i++)
        {
            cout<<arr[i];
            }

        }

        else
        {
            if(s==true)
            {cout<<"+";
            }
    else
        {
            if(s==false)
                  {
                      cout<<"-";
                  }
        }
         for(int i=0; i<n; i++)
        {
            cout<<arr[i];
        }
        }
}

}



void ClntN :: CopyOnly(const bool r,const int m, const int* brr, const string filename)
{
    n=m;
    s=r;
    FileName=filename;
    arr=new int[n];
    for(int i=0; i<n; i++)
    {
        if(brr[i]>=0 && brr[i]<10)
            arr[i]=brr[i];
        else throw 4;
    }
}



 void ClntN :: CopyOnly(const ClntN &b)
 {
      n=b.n;
      s=b.s;
      FileName=b.FileName;
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(b.arr[i]>=0 && b.arr[i]<10)
            arr[i]=b.arr[i];
      else throw 2;
      }
}


    ClntN :: ClntN(const bool r,const int m, const int* brr, const string filename)
    {
      n=m;
      s=r;
      FileName=filename;
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(brr[i]>=0 && brr[i]<10)
            arr[i]=brr[i];

      else  throw 2;
      }

    }



    ClntN :: ClntN(const bool r,const int m, const vector<int> brr, const string filename)
    {
      n=m;
      s=r;
      FileName=filename;
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(brr[i]>=0 && brr[i]<10)
            arr[i]=brr[i];

      else  throw 2;
      }

    }


    ClntN :: ClntN(const bool r,const int m, const vector<int> brr)
    {
      n=m;
      s=r;
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(brr[i]>=0 && brr[i]<10)
            arr[i]=brr[i];

      else  throw 2;
      }

    }



