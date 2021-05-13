#include<iostream>

void stringConverse(std::string str)
{
    int len=str.length();
    for(int i=0;i<len/2;i++)
    {
        str[i]=str[i]^str[len-1-i];
        str[len-1-i]=str[i]^str[len-1-i];
        str[i]=str[i]^str[len-1-i];
    }
    for(int i=0;i<str.length();i++)
    {
        std::cout<<str[i];
    }
}

int main()
{
    std::string str;
    std::cin>>str;
    stringConverse(str);
}