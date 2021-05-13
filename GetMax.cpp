#include<iostream>
#include<ctime>
using namespace std;
const int N=100;
int process(int arr[],int L,int R)
{
    if(L==R)
    {
         return arr[L];
    }
    int mid=L+((R-L)>>1); // 求中点
    int left=process(arr,L,mid);
    int right=process(arr,mid+1,R);
    return left>right?left:right;
}

int main()
{
    int i,j;
    int arr[N];
    srand((unsigned)time(NULL));
    for(i=0;i<100;i++)
    {
        arr[i]=rand()%100;
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The big number is:"<<process(arr,0,99)<<endl;
    return 0;
}