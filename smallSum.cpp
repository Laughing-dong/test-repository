#include<iostream>
#include<ctime>
using namespace std;

const int N=5;

int process(int arr[],int L,int R);
int merge(int arr[],int L,int M,int R);

int samllSum(int arr[],int len)
{
    if(arr==NULL||len<2)
    return 0;
    return process(arr,0,len-1);
}

int process(int arr[],int L,int R)
{
    if(L==R)
    {
        return 0;
    }
    int mid=L+((R-L)>>1);
    return process(arr,L,mid)+process(arr,mid+1,R)+merge(arr,L,mid,R);
}

int merge(int arr[],int L,int M,int R)
{
    int *help=new int(R-L+1);
    int i=0;
    int p1=L;
    int p2=M+1;
    int res=0;
    while(p1<=M&&p2<=R)
    {
        res+=arr[p1]<arr[p2]?(R-p2+1)*arr[p1]:0;
        help[i++]=arr[p1]<arr[p2]?arr[p1++]:arr[p2++];
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
    return res;
}

int main()
{
    int i,j;
    int arr[N];
    srand((unsigned)time(NULL));
    for(i=0;i<5;i++)
    {
        arr[i]=rand()%10;
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<samllSum(arr,5)<<endl;
    for(int cur:arr)
    {
        cout<<cur<<" ";
    }
    return 0;
}