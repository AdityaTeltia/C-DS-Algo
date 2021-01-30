#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int temp = 9;
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int data = 0;
        map<int,int>mp,hill,valley;
        for(int i=1;i<n-1;i++){
            if(a[i] > a[i-1] && a[i] > a[i+1])
            data++,hill[i]++;

            if(a[i] < a[i-1] && a[i] < a[i+1])
            data++,valley[i]++;
        }
        int ans = data;
        int sub = 0;
        for(int i=0;i<n;i++){
            int temp = a[i];
            sub = 0;
            if(i-1 >= 0){
                a[i] = a[i-1];
                for(int j=i-1; j<i+2; j++){
                    if(j>=1 && j<n-1){
                        if(!(a[j]>a[j-1] && a[j]>a[j+1])){
                            if(hill[j]) sub++;
                        }
                        else sub--;
                        if(!(a[j]<a[j-1] && a[j]<a[j+1])){
                            if(valley[j]) sub++;
                        }
                        else sub--;
                    }
                }
                ans = min(ans, data-sub);
            }
            sub = 0;
            if(i+1<n){
                a[i] = a[i+1];
                for(int j=i-1;j<i+2;j++){
                    if(j>=1 && j<n-1){
                        if(!(a[j]>a[j-1] && a[j]>a[j+1])){
                            if(hill[j]) sub++;
                        }
                        else sub--;
                        if(!(a[j]<a[j-1] && a[j]<a[j+1])){
                            if(valley[j]) sub++;
                        }
                        else sub--;
                    }
                }
                ans = min(ans, data-sub);
            }
            a[i] = temp;
        }
        cout<<ans<<endl;
    }
}
