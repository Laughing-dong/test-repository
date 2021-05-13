#include<iostream>
#include<string>


std::string repeater(std::string str, int n)
{
  std::string str1;
  for(int i=0;i<n;i++){
    str1+=str;
  }
  return str1;
}

int main()
{
    std::cout<<repeater("ha",10);
}