#include<iostream>
#include<vector>

using namespace std;
/*
    使用暴力破解，两层循环使数组中的数两两配对相加与目标值比较
    vector容器中的size方法返回的是容器中的元素个数，capacity方
    法返回的是容器的大小
*/
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<=nums.size()-1;j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;                     
}

int main(){
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-2);
    nums.push_back(-3);
    nums.push_back(-4);
    nums.push_back(-5);
    twoSum(nums,-8);

}