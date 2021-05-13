#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int i,j;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        j=rand()%100;
        cout<<j<<" ";
    }
    return 0;
}