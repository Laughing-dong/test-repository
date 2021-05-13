#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,1,3,1,3,1,3,2,1};
    int eor=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        eor=eor^arr[i];
    }
    cout<<eor<<endl;
}