#include<iostream>
#include<ctime>

const int N=10;

using namespace std;

void swap(int arr[],int L,int R);
int * partition(int arr[],int L,int R);
void quickSort(int arr[],int L,int R);

void quickSort(int arr[],int len)
{
    if(arr==NULL||len<2)
    {
        return;
    }
    quickSort(arr,0,len-1);
}

void quickSort(int arr[],int L,int R)
{
    if(L<R)
    {
        swap(arr,L+rand()%(R-L+1),R);
        int *p=partition(arr,L,R);
        quickSort(arr,L,p[0]-1);
        quickSort(arr,p[1]+1,R);
    }
}

int * partition(int arr[],int L,int R)
{
    int less=L-1;
    int more=R;
    while(L<R)
    {
        if(arr[L]<arr[R])
        {
            swap(arr,++less,L++);
        }
        else if(arr[L]>arr[R])
        {
            swap(arr,--more,L);
        }
        else
        {
            L++;
        }
    }
    swap(arr,more,R);
    int p[]={less+1,more};
    return p;
}

void swap(int arr[],int L,int R)
{
    arr[L]=arr[L]<<arr[R];
    arr[R]=arr[L]<<arr[R];
    arr[L]=arr[L]<<arr[R];
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
    quickSort(arr,0,9);
    for(int cur:arr)
    {
        cout<<cur<<" ";
    }
    return 0;
}