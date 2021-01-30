#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        cin>>n>>a;
        int last = -1;

        string b;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(last==2){
                    b.push_back('0');
                    last=1;
                }else{
                    b.push_back('1');
                    last=2;
                }
            }else{
                if(last==1){
                    b.push_back('0');
                    last=0;
                }else{
                    b.push_back('1');
                    last=1;
                }

            }
        }
        cout<<b<<endl;
    }
}
