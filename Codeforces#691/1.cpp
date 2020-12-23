#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        string b;

        cin>>a;
        cin>>b;
        int num1 = 0;
        int num2 = 0;
        for(int i = 0;i<n;i++){
            if(a[i]>b[i]){
                num1++;
            }else if(a[i]<b[i]){
                num2++;
            }
        }

        if(num1>num2){
            cout<<"RED"<<endl;
        }else if(num2>num1){
            cout<<"BLUE"<<endl;
        }else{
            cout<<"EQUAL"<<endl;
        }
    }
}
