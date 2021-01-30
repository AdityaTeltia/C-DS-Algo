#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i]*b[i];
    }
    if(sum==0){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;


}
