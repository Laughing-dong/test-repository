#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>

int main()
{
    srand((unsigned)time(NULL));
    std::vector<int> price;
    for(int i=0;i<15;i++)
    {
        price.push_back(rand()%30);
    }
    for(int cur:price)
    {
        std::cout<<cur<<" ";
    }
    std::cout<<'\n';
    int minn=price[0];
    int ans=0;
    for(std::vector<int>::iterator it=price.begin();it!=price.end();it++)
    {
        minn=std::min(minn,*it);
        ans=std::max(ans,*it-minn);
    }
    std::cout<<ans<<'\n';
}