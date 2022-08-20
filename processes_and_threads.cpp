#include <iostream>
#include <iomanip>
using namespace std;
//#include <unistd.h>


int a = 1;
int main()
{
    /*printf("address: 0x%p, value: %d", &a, a);
    sleep(10000000);*/
    float a=12.111111111111111;
    double b=12.111111111111111;
    const float PI=3.1415926;         // 常量定义
    cout<<a<<endl;  // 只有6-7位有效数字，后面的就不精确
    cout<<b<<endl;  // 有15-16位有效数字，所以完全正确
    cout<<PI<<endl; 
    return 0;
}