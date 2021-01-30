#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a;
        int num = 1;
        for(int i=0;i<n;i++){
            if(i+1<=k){
                a.push_back(num);
                num++;
            }else{
                a.push_back(num);
                num--;
            }
        }

    }

}
