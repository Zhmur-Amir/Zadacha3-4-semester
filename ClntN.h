#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <omp.h>
#include <chrono>
#include <fstream>
#include <string>
using namespace std;



class ClntN
{
protected:
    bool s; int n; int *arr; string FileName;
public:
    ClntN(){SetZero();}
    ClntN(const ClntN &b){CopyOnly(b);}
    virtual ~ClntN(){Clean();}
    ClntN &operator=(const ClntN&b){if(this!=&b){Clean(); CopyOnly(b);} return *this;}
    void Clean(){delete[] arr; SetZero();}
    void SetZero(){arr=NULL; s=NULL; n=0; FileName.clear();}
    void CopyOnly(const ClntN &b);
    ClntN(const bool r,const int m, const vector<int> brr, const string filename);
    ClntN(const bool r,const int m, const vector<int> brr);
    void CopyOnly(const bool r,const int m, const int* brr, const string filename);
    ClntN(const bool r,const int m, const int* brr,const string filename);
    int &operator[](int i)const{if(i<0 || i>=n) throw 3; return arr[i];}
    bool sign()const {return s;}
    int len()const {return n;}
    void print();
    virtual int output()=0;

};










