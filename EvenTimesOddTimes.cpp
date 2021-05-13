#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,1,3,1,3,1,3,2};
    int eor=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        eor^=arr[i];
    }
    // eor=a^b
    // eor!=0;
    // eor必有一个位置上是1
    int rightOne=eor&(~eor+1); // 提取出最右侧的一
    int onlyOne=0;
    for(int cur:arr)
    {
        if((cur&rightOne)==0)
        {
            onlyOne^=cur;
        }
    }
    cout<<onlyOne<<endl;
    cout<<(eor^onlyOne)<<endl;
}