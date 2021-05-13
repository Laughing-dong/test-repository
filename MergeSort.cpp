#include<iostream>
#include<ctime>
using namespace std;

const int N=10;

void merge(int arr[],int L,int M,int R)
{
    int *help=new int(R-L+1);
    int i=0;
    int p1=L;
    int p2=M+1;
    while(p1<=M&&p2<=R)
    {
        help[i++]=arr[p1]<=arr[p2]?arr[p1++]:arr[p2++];
    }
    while(p1<=M)
    {
        help[i++]=arr[p1++];
    }
    while(p2<=R)
    {
        help[i++]=arr[p2++];
    }
    for(int i=0;i<(R-L+1);i++)
    {
        arr[L+i]=help[i];
    }
}

void sort(int arr[],int L,int R)
{
    if(L==R)
    {
        return;
    }
    int M=L+((R-L)>>1);
    sort(arr,L,M);
    sort(arr,M+1,R);
    merge(arr,L,M,R);
}



int main()
{
    int i,j;
    int arr[N];
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%10;
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,0,9);
    for(int cur:arr)
    {
        cout<<cur<<" ";
    }
    return 0;
}