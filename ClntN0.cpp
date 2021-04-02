#include "ClntN0.h"





    /*ClntN0 :: ClntN0(const bool r,const int m, const vector<int> brr, const string filename)
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

    ClntN0 :: ClntN0(const bool r,const int m, const vector<int> brr)
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
*/
   /* void ClntN0 :: CopyOnly(const ClntN &b)
    {
      n=b.len();
      s=b.sign();
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(b[i]>=0 && b[i]<10)
            arr[i]=b[i];
      else
        {
            cout<<"Too big number in CopyOnly(1)"<<endl;
            throw 2;
        }
      }
    }

    void ClntN0 :: CopyOnly(const ClntN0 &b)
    {
      n=b.n;
      s=b.s;
      FileName=b.FileName;
      arr=new int[n];
      for(int i=0; i<n; i++)
        {
            if(b.arr[i]>=0 && b.arr[i]<10)
            arr[i]=b.arr[i];
      else
        {
            cout<<"Too big number in CopyOnly(2)"<<endl;
            throw 2;
        }
      }
    }

*/










ClntN0 operator+(const ClntN&a,const ClntN&b)
{
   bool h;
    if(b.len()!=a.len())
    {
        cout<<"Error! Different length..."<<endl;
        throw 1;
    }
    else{}
    if(b.len()==0 || a.len()==0)
    {
        cout<<"Error! Zero length..."<<endl;
        throw 1;
    }
    ClntN0 f;
    f.s=a.sign();
    f.n=a.len();
    f.arr=new int[a.len()];
    auto start=chrono::system_clock::now();
    omp_set_dynamic(0);
    omp_set_num_threads(10);

    if(b.sign()==a.sign())

    {
        vector<int> j;
        j.resize(a.len());
        #pragma omp parallel for
        for(int i=0; i<a.len(); i++)
        {
            j[i]=(a[i]+b[i]);
        }

        if(j[0]>9)
        {
           cout<<"Too big number"<<endl;
           throw 5;
        }


        for(int i=a.len()-1; i>=0; i--)
        {
            if (j[i]>9)
            {
                j[i]=j[i]-10;
                j[i-1]=j[i-1]+1;
            }
        }
        #pragma omp parallel for
        for(int i=0; i<a.len(); i++)
        {
            f.arr[i]=j[i];
        }

    }

    else
    {
        for(int i=0; i<a.len(); i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]>b[i])
                    {h=true;}
                else
                {h=false;}
                break;
            }

        }

        if(h==true)
        {
            vector<int> g;
            g.resize(a.len());
            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                g[i]=(a[i]-b[i]);
            }

            for(int i=a.len()-1; i>=0; i--)
            {
                if (g[i]<0)
                {
                    g[i]=g[i]+10;
                    g[i-1]=g[i-1]-1;
                }
            }


            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                f.arr[i]=g[i];
            }




        }
        if(h==false)
        {
           f.s=!a.sign();
           vector<int> p;
            p.resize(a.len());
            #pragma omp parallel for
            for(int i=a.len()-1; i>=0; i--)
            {
                p[i]=(-a[i]+b[i]);
            }

            for(int i=a.len()-1; i>=0; i--)
            {
                if (p[i]<0)
                {
                    p[i]=p[i]+10;
                    p[i-1]=p[i-1]-1;
                }
            }


            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                f.arr[i]=p[i];
            }



        }

    }
    auto end=chrono::system_clock::now();
    int elapsed_ms=static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end-start).count());
    cout<<"Addition operator + runtime is "<<elapsed_ms<<" ms"<<endl;

    return f;
}



ClntN0 operator-(const ClntN&a,const ClntN&b)
{
   bool h;
    if(b.len()!=a.len())
    {
        cout<<"Error! Different length..."<<endl;
        throw 1;
    }
    else{}
    if(b.len()==0 || a.len()==0)
    {
        cout<<"Error! Zero length..."<<endl;
        throw 1;
    }
    ClntN0 f;
    f.s=a.sign();
    f.n=a.len();
    f.arr=new int[a.len()];
    auto start=chrono::system_clock::now();
    omp_set_dynamic(0);
    omp_set_num_threads(10);

    if(b.sign()!=a.sign())

    {
        vector<int> j;
        j.resize(a.len());
        #pragma omp parallel for
        for(int i=0; i<a.len(); i++)
        {
            j[i]=(a[i]+b[i]);
        }

        if(j[0]>9)
        {
           cout<<"Too big number"<<endl;
           throw 5;
        }


        for(int i=a.len()-1; i>=0; i--)
        {
            if (j[i]>9)
            {
                j[i]=j[i]-10;
                j[i-1]=j[i-1]+1;
            }
        }
        #pragma omp parallel for
        for(int i=0; i<a.len(); i++)
        {
            f.arr[i]=j[i];
        }

    }

    else
    {
        for(int i=0; i<a.len(); i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]>b[i])
                    {h=true;}
                else
                {h=false;}
                break;
            }

        }

        if(h==true)
        {
            vector<int> g;
            g.resize(a.len());
            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                g[i]=(a[i]-b[i]);
            }

            for(int i=a.len()-1; i>=0; i--)
            {
                if (g[i]<0)
                {
                    g[i]=g[i]+10;
                    g[i-1]=g[i-1]-1;
                }
            }


            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                f.arr[i]=g[i];
            }




        }
        if(h==false)
        {
           f.s=!a.sign();
           vector<int> p;
            p.resize(a.len());
            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                p[i]=(-a[i]+b[i]);
            }

            for(int i=a.len()-1; i>=0; i--)
            {
                if (p[i]<0)
                {
                    p[i]=p[i]+10;
                    p[i-1]=p[i-1]-1;
                }
            }


            #pragma omp parallel for
            for(int i=0; i<a.len(); i++)
            {
                f.arr[i]=p[i];
            }



        }

    }
    auto end=chrono::system_clock::now();
    int elapsed_ms=static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end-start).count());
    cout<<"Addition operator - runtime is "<<elapsed_ms<<" ms"<<endl;
    return f;
}




