#include<iostream>
#include<string>

bool valid_braces(std::string braces) 
{
  // valid or not valid?
  int i=0;
  while(true){
    if(braces[i]=='('&&braces[i+1]==']'){
      return false;
      break;
    }else if(braces[i]=='('&&braces[i+1]=='}'){
      return false;
      break;
    }else if(braces[i]=='['&&braces[i+1]==')'){
      return false;
      break;
    }else if(braces[i]=='['&&braces[i+1]=='}'){
      return false;
      break;
    }else if(braces[i]=='{'&&braces[i+1]==')'){
      return false;
      break;
    }else if(braces[i]=='{'&&braces[i+1]==']'){
      return false;
      break;
    }
    i++;
  }
  return true;
}

int mian()
{
  std::string str;
  std::cin>>str;
  std::cout<<valid_braces(str);
}