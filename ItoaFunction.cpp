#include<iostream>

int main()
{
    int num=12345;
    char string[7];
    itoa(num,string,10);
    std::cout<<string;
    return 0;
}