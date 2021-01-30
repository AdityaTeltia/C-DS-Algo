#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char>even;
        vector<char>odd;
        int j=0;
        int k=0;

        for(int i=0;i<s.length();i++){
            if(i%2==0){
                even.push_back(s[i]);
                j++;
            }else{
                odd.push_back(s[i]);
                k++;
            }
        }
        for(int i=0;i<even.size();i++){
            cout<<even[i];
        }
        cout<<" ";
        for(int i=0;i<odd.size();i++){
            cout<<odd[i];
        }
        cout<<endl;
    }

}
