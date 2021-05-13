#include<iostream>


// 整数转换成字符串，可以采用加'0'，再逆序的方法，整数加'0'就会隐性转换成char类型的数
int main()
{
    int num=12345,j=0,i=0;
    char temp[7] ,str[7];
    
    // ito(num,string,10);
    while(num)
    {
        temp[i]=num%10+'0';
        i++;
        num/=10;
    }
    // temp[i]=0;;
    // printf("temp=%s\n",temp);
    // i=i-1;
    // printf("temp=%d\n",i);
    // 刚刚转换的字符串是逆序的，必须把它反转过来
    while(i>=0)
    {
        str[j]=temp[i];
        j++;
        i--;
    }
    str[j]=0;
    printf("string=%s\n",str);
    return 0;

}