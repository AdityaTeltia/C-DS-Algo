#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,p;
        cin>>s;
        cin>>p;
        int x =0;
        bool num =1;
        int p1 = 0;
        int s1 = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                s1++;
            }
            if(p[i]=='1'){
                p1++;
            }
        }
        if(p1!=s1){
            cout<<"No"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                x++;
            }
            if(p[i]=='1'){
                x--;
            }
            if(x<0){
                num =0;
                break;
            }
        }
        if(num){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
