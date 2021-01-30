#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int s1 =0;
        int s2 =0;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even.push_back(a[i]);
            }else{
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int mn = min(even.size(),odd.size());
        int i= even.size()-1;
        int temp = mn;
        int temp2 = mn;
        while(temp--){
            s1 += even[i];
            i--;
        }
        int j= odd.size()-1;
        while(temp2--){
            s2 += odd[j];
            j--;
        }
        cout<<s1<<" "<<s2<<endl;
        if(odd.size()>even.size()){
            int j = odd.size()-mn;
            for(int k = j-2;k>=0;k = k-2){
                s2 += odd[k];
            }
        }else if(even.size()>odd.size()){
            int j = even.size()-mn;
            for(int k = j-1;k>=0;k = k-2){
                s1 += even[k];
            }
        }
        if(s1>s2){
            cout<<"Alice"<<endl;
        }else if(s1==s2){
            cout<<"Tie"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }

    }

}
