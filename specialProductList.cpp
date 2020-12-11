#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    vector<int> ans;
    int multiply = 1;
    vector<int>temp1;
    int temp2[nums.size()]={};
    for(int i=0;i<nums.size();i++){
         multiply *= nums[i];
         temp1.push_back(multiply);
    }
    multiply = 1;
    for(int i=nums.size()-1;i>=0;i--){
         multiply *= nums[i];
         temp2[i] =  multiply;
    }
    for(int i =0;i<nums.size();i++){
        cout<<temp2[i]<<endl;
    }

    for(int i=0;i<nums.size();i++){
        if(i==0){
            ans.push_back(temp2[i+1]);
        }else if(i==nums.size()-1){
            ans.push_back(temp1[i-1]);
        }else{
            ans.push_back(temp2[i+1]+temp1[i-1]);
        }
    }
    return ans;
}


int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    vector<int>nums(a,a+n);

    vector<int>output = solve(nums);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }
}
