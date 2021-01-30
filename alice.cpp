#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        int sum =0;
        bool k = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum += x;
            if(x==1){
                k = true;
            }
            ans.push_back(x);
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }else if(k==false && n%2 != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

}
