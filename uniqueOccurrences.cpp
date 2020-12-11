#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& nums) {
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;

    for(int i=0;i<nums.size();i++){
            mp1[nums[i]]++;
    }

    for(int i=0;i<mp1.size();i++){
        mp2[mp1[i]]++;
    }
    for(int i=0;i<mp2.size();i++){
        cout<<mp2[i]<<endl;
    }
//    for(int i = 0;i<mp2.size();i++){
//       if(mp2[mp1[i]]>1){
//            return false;
//        }
//    }
    return true;
}

int main(){
    int arr[] = {-3,-1,-1,-1,-2,-2};
    int n = sizeof(arr)/sizeof(int);
    vector<int>a(arr,arr+n);
    cout<<solve(a)<<endl;

}
