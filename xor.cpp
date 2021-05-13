#include<iostream>
using namespace std;

int main()
{
    int a=12;
    int b=23;
    int c=12;
    int d=12;
    cout<<&c<<" "<<&d<<endl;
    // cout<<"a="<<a<<","<<"b="<<b<<endl;
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<"a="<<a<<","<<"b="<<b<<endl;
    c=c^d;
    d=c^d;
    c=c^d;
    cout<<c<<" "<<d<<endl;

}